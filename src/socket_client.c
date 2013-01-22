/*
 * socket_client.c
 *
 *  Created on: Sep 22, 2012
 *      Author: caoj7
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

#include<sys/types.h>
#include<sys/socket.h>
#include <sys/fcntl.h>

#include<netinet/in.h>
#include<arpa/inet.h>

#include "config.h"
#include "socket_client.h"

#define SIZE 8192


int operation(char *cmd_str)
{
	char rt_str[SIZE];
	int socket_fd;

	char IP[16];
	uint32_t PORT;
	get_IP_PORT(IP, &PORT);

	if(socket_fd = socket(AF_INET, SOCK_STREAM, 0), socket_fd < 0){
		perror("ERROR: socket");
		return -1;
	}

	//	 flags = fcntl(socket_fd, F_GETFL, 0);
	//	 fcntl(socket_fd, F_SETFL, flags | O_NONBLOCK);

	struct sockaddr_in address;
	bzero(&address, sizeof(address));
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = inet_addr(IP);
	address.sin_port =  htons(PORT);

	if(connect(socket_fd, (struct sockaddr*)&address, sizeof(address)) < 0){
		perror("ERROR: connect");
		return -1;
	}

	//send the cmd
	if(send(socket_fd, cmd_str, strlen(cmd_str) + 1, 0) < 0){
		perror("ERROR: send");
		return -1;
	}

	//recv
	if(recv(socket_fd, rt_str, SIZE, 0) < 0){
		perror("ERROR: recv");
		return -1;
	}

	puts(rt_str);

	close(socket_fd);
	return 0;
}
