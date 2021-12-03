#include "merge.h"
#include <stdlib.h>

void rMergeSort(Element ls[],int lo,int hi)
{

	if(lo>=hi) return;
	{
		int i;
		Element* newls=(Element*)malloc((hi-lo+1)*sizeof(Element));

		int mid=(lo+hi-1)/2;
		rMergeSort(ls,lo,mid);
		rMergeSort(ls,mid+1,hi);
		merge(&ls[lo],mid-lo+1,&ls[mid+1],hi-mid,newls);

		for(i=lo;i<=hi;i++)
		{
			ls[i]=newls[i-lo];
		}

		free(newls);
	}

}

int mini(int x,int y)
{
	return ((x<y)?x:y);
}

void iMergeSort(Element ls[],int size)
{
	int sortsize,index,end1,end2,i;
	for(sortsize=1;sortsize<size;sortsize*=2)
	{
		for(index=0;index<size;index+=2*sortsize)
		{
			end1=mini(size-index,sortsize);
			end2=mini(sortsize,size-(index+end1));
			Element* list=(Element*)malloc(sizeof(Element)*(end1+end2));
			merge(&ls[index],end1,&ls[index+end1],end2,list);
			for(i=0;i<end1+end2;i++)
			{
				ls[index+i]=list[i];
			}
			free(list);
		}

	}
}
