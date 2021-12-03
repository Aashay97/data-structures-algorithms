#include "merge.h"
#include <stdio.h>

int main()
{
	Element ls[1025];
	FILE* fp=fopen("1024.txt","r");

	int i=0;
	while(!feof(fp) && i<1025)
	{
		fscanf(fp,"%[a-z],%f\n",ls[i].Name,&ls[i].cgpa);
		i++;
	}

	//printList(ls,1024);

	iMergeSort(ls,1025);

	printList(ls,1025);

	return 0;
}
