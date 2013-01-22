/*
 ============================================================================
 Name        : slurm_client.c
 Author      : Jimmy Cao
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "socket_client.h"
#include "config.h"

int main(void)
{
		char *query_total = "get total node and slot no";
		char *query_available = "get available node and slot no";

		char *allocate_str = "allocate N=2 node_list=vm[3-4],host120 flag=optional timeout=15";
//		char *allocate_str = "allocate N=2 node_list=vm[2-3],host120 flag=mandatory timeout=15";

//        operation(query_total);
//        puts("============================");
//        operation(query_available);
        puts("============================");
        operation(allocate_str);

        return EXIT_SUCCESS;
}
