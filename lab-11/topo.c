#include "graph.h"

void topoSort(EdgeList e)
{
	int i=0,j;
	while(1)
	{
		for(i=0;i< e->varrsize;i++)
		{
			if(e->varr[i].flag && e->varr[i].indeg==0)
			{
				e->varr[i].flag=false;
				break;
			}
		}
		if(i==e->varrsize) break;
		printf("%d\n",i);

		for(j=0;j< e->numedges;j++)
		{
			if(e->edges[j][0]==i)
				e->varr[e->edges[j][1]].indeg--;
		}
	}
	return;
}
