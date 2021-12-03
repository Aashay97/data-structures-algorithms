#include "merge.h"
#include <stdio.h>
#include <string.h>

void merge(Element ls1[],int size1, Element ls2[],int size2,Element ls[])
{
	int i=0,j=0;
	while(i<size1 && j<size2)
	{
		if(ls1[i].cgpa<=ls2[j].cgpa)
		{
			ls[i+j]=ls1[i];
			i++;
		}

		else
		{
			ls[i+j]=ls2[j];
			j++;
		}
	}

	if(i==size1 && j<size2)
	{
		while(j<size2)
		{
			ls[i+j]=ls2[j];
			j++;
		}
	}

	if(j==size2 && i<size1)
	{
		while(i<size1)
		{
			ls[i+j]=ls1[i];
			i++;
		}
	}
}


void printList(Element ls[],int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		printf("%s, %f\n",ls[i].Name,ls[i].cgpa);
	}
}

Element createEle(char name[],float cgpa)
{
	Element e;
	strcpy(e.Name,name);
	e.cgpa=cgpa;

	return e;
}

/*int main()
{
        Element ls[5];

	ls[0]=createEle("defvkjablb",7.65);
	ls[1]=createEle("wjhvWVFHVA",7.897);
	ls[2]=createEle("vfgewvqgjh",8.632);
	ls[3]=createEle("vshfvveatd",7.585);
	ls[4]=createEle("efawhebgbd",8.487); 

	rMergeSort(ls,0,5);

	printList(ls,5);

	return 0;
}
*/
