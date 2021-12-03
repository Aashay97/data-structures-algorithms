#include "employee.h"

Employee* getList(Employee record[],int size)
{
	Employee* list=(Employee*)malloc(size*sizeof(Employee));
	int i;

	for(i=0;i<size;i++)
		list[i]=record[i];

	return list;
}

void testRun(Employee record[],int size,double Time[])
{
	struct timeval t1,t2,t3;
	Employee* record2=getList(record,size);
	Employee* record1=getList(record,size);

	gettimeofday(&t1,NULL);
	insertionSort(record1,size);

	gettimeofday(&t2,NULL);
	quickSort(record2,size,2);

	gettimeofday(&t3,NULL);

	Time[0]=(t2.tv_sec-t1.tv_sec)*1000000;
	Time[0]+=(t2.tv_usec-t1.tv_usec);

	Time[1]=(t3.tv_sec-t2.tv_sec)*1000000;
	Time[1]+=(t3.tv_usec-t2.tv_usec);

}


int estimateCutoff(Employee record[],int size)
{
	double tt1[2],tt2[2],tt[2];
	int min=20;
	int max=200;
	//Employee* rmin=getList(record,min);
	//Employee* rmax=getList(record,max);
	testRun(record,min,tt1);
	testRun(record,max,tt2);

	printf("is=%lf qs=%lf \n",tt1[0],tt1[1]);
	printf("is=%lf qs=%lf \n",tt2[0],tt2[1]);

	int mid;

	do
	{
		mid=(min+max)/2;
		testRun(record,mid,tt);

		if(tt[0]>=tt[1]) max=mid;

		else min=mid;

	}while(tt[0]-tt[1]>1 || tt[0]-tt[1]<1);

        printf("is=%lf qs=%lf cutoff=%d \n",tt[0],tt[1],mid);

	return 0;
}
