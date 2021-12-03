#include "graph.h"
/*
EdgeList readedges(char* fname)
{
	FILE* fp=fopen(fname,"r");
	if(fp==NULL)
		return NULL;

	int to,from,size=10,i;

	EdgeList e=(EdgeList)malloc(sizeof(struct edgeList));

	e->numedges=0;
	e->edges=(int**)malloc(sizeof(int*)*size);

	for(i=0;i<size;i++)
		e->edges[i]=(int*)malloc(sizeof(int)*2);

	i=0;

	while(!feof(fp))
	{
		if(i==size)
		{
			size*=2;
			e->edges=realloc(e->edges,sizeof(int)*size);
		}
		fscanf(fp,"%d %d\n",&from,&to);
		e->edges[i][0]=from;
		e->edges[i][1]=to;
		i++;
		e->numedges++;
	}

	return e;
}
*/

EdgeList readedges(char* fname)
{
        FILE* fp=fopen(fname,"r");
        if(fp==NULL)
                return NULL;

        int to,from,size=10,i;

        EdgeList e=(EdgeList)malloc(sizeof(struct edgeList));

        e->numedges=0;
        e->edges=(int**)malloc(sizeof(int*)*size);
        for(i=0;i<size;i++)
                e->edges[i]=(int*)malloc(sizeof(int)*2);

	int sizevar=15;

	e->varr=(Vertex)malloc(sizeof(struct vertex)*sizevar);
	for(i=0;i<sizevar;i++)
		e->varr[i].flag=false;

	e->varrsize=sizevar;

        i=0;

        while(!feof(fp))
        {
                if(i==size)
                {
                        size*=2;
                        e->edges=realloc(e->edges,sizeof(int)*size);
                }
                fscanf(fp,"%d %d\n",&from,&to);
                e->edges[i][0]=from;
                e->edges[i][1]=to;
		if(!e->varr[from].flag)
		{
			e->varr[from].flag=true;
			e->varr[from].indeg=0;
			e->varr[from].outdeg=1;
		}

		else
		{
			e->varr[from].outdeg++;
		}

                if(!e->varr[to].flag)
                {
                        e->varr[to].flag=true;
                        e->varr[to].indeg=1;
                        e->varr[to].outdeg=0;
                }

                else
                {
                        e->varr[to].indeg++;
                }

                i++;
                e->numedges++;
        }

        return e;
}

void printedges(EdgeList e)
{
	int i;
	for(i=0;i< e->numedges ;i++)
	{
		printf("%d->%d\n",e->edges[i][0],e->edges[i][1]);
	}
	return;
}

void printver(EdgeList e)
{
	int i;
	for(i=0;i< e->varrsize;i++)
	{
		if(e->varr[i].flag)
			printf("vertex %d indeg=%d outdeg=%d\n",i,e->varr[i].indeg,e->varr[i].outdeg);
	}

}
