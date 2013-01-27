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
#if 0
		char *allocate_str = "allocate jobid=100 return=all timeout=10:app=0 np=5 N=2 node_list=vm2,vm3 flag=mandatory:app=1 N=2";
		operation(allocate_str);
#endif


#if 1
		char *deallocate = "deallocate slurm_jobid=744 job_return_code=0:slurm_jobid=745 job_return_code=-1";
//		char *deallocate = "deallocate slurm_jobid=732 job_return_code=-1";
        operation(deallocate);
#endif
        return EXIT_SUCCESS;
}
