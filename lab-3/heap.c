#include <stdlib.h>
#include <stdio.h>

long long unsigned int space=0;

void* myalloc(int numbytes)
{
	space+=numbytes+4;
	int* mem=(int*)malloc(numbytes+4);
	*mem=numbytes;
	mem++;
	return (void*)mem;
}

void myfree(void* ptr)
{
	int *p=(int*)ptr;
	p--;
	space-= *p;
	free(p);
	return;
}

int randnum()
{
	int x;
	do
	{
		x=rand()%25000;
	}while(x<10000);
	return x;
}

/*
int main()
{
	int* A;
	do
	{
		A=(int*)myalloc(sizeof(int)*randnum());
		myfree(A);
		printf("%llu\n",space);
	}while(A!=NULL);
	return 0;
}
*/
