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
#if 1
		char *query_total = "get total nodes and slots";
		operation(query_total);

		char *query_available = "get available nodes and slots";
		operation(query_available);
#endif

#if 0
		char *allocate_str = "allocate jobid=100 return=all timeout=10:app=0 np=5 N=2 node_list=vm2,vm3 flag=mandatory:app=1 N=2";
		operation(allocate_str);
#endif


#if 0
		char *deallocate = "deallocate slurm_jobid=749 job_return_code=0:slurm_jobid=750 job_return_code=-1";
//		char *deallocate = "deallocate slurm_jobid=732 job_return_code=-1";
        operation(deallocate);
#endif
        return EXIT_SUCCESS;
}
