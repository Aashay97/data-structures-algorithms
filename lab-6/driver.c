#include "employee.h"

void printList(Employee ls[],int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		printf("%s, %llu\n",ls[i].name,ls[i].empID);
	}
}

int main()
{
	Employee record[20000];
        FILE* fp=fopen("data2.txt","r");
	//char name[9];
	//int numfiles=0,i,j;
	int i=0;

	while(!feof(fp))
	{
        	//while(!feof(fp) && i<k)
	        fscanf(fp,"%[a-z] %llu\n",record[i].name,&record[i].empID);
       	        i++;
	}

	//printf("Enter min list size:");
	//int S;
	//scanf("%d",&S);
	//empSort(record,2000,S);
	estimateCutoff(record,20000);
	//printList(record,2000);
	return 0;
}
