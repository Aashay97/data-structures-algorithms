#include "employee.h"
#include "stack.h"

int partition(Employee record[],int lo,int hi)
{
	int i=lo,j=hi;
	Employee temp;

	while(true)
	{
		while(record[++i].empID<record[lo].empID)
			if(i==hi) break;

		while(record[--j].empID>record[lo].empID)
			if(j==lo) break;

		if(i>=j) break;

		temp=record[i];
		record[i]=record[j];
		record[j]=temp;
	}

	temp=record[lo];
	record[lo]=record[j];
	record[j]=temp;

	return j;
}


void quickSort(Employee record[],int size,int S)
{
	int j;
	//int j=partition(record,0,size);
	Stack s=newStack();
	s=push(s,0,size);

	while(!isEmpty(s))
	{
		Element el = top(s);
		s=pop(s);
            	if (el.hi - el.lo < S) {
			//insertionSort(record+el.lo-1,el.hi-el.lo+1);
			continue;
            	}
            	j = partition(record, el.lo, el.hi);

            	push(s,j+1,el.hi);
            	push(s,el.lo,j);
	}
}

void insertionSort(Employee record[],int size)
{
	int i,j;
	Employee temp;

	for(i=1;i<size;i++)
	{
		temp=record[i];
		j=i-1;
		while(j>=0 && temp.empID<record[j].empID)
		{
			record[j+1]=record[j];
			j--;
		}
		record[j+1]=temp;
	}
}

void empSort(Employee record[],int size,int S)
{
	quickSort(record,size,S);
	insertionSort(record,size);
}
