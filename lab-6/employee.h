#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

typedef struct
{
	char name[11];
	long long unsigned empID;
}Employee;

void quickSort(Employee record[],int size,int S);
void insertionSort(Employee record[],int size);
void empSort(Employee record[],int size,int S);
int estimateCutoff(Employee record[],int size);

#endif
