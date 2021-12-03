#include "graph.h"

Graph createGraph(int numV)
{
	Graph g=(Graph)malloc(sizeof(struct graph));
	g->numV=numV;
	g->varr=(Vertex)malloc(sizeof(struct vertex)*numV);
	g->adjacent=(bool**)malloc(sizeof(bool*)*numV);
	int i,j;

	for(i=0;i<numV;i++)
	{
		g->varr[i].val=rand();
		g->varr[i].index=i;
		g->adjacent[i]=(bool*)malloc(sizeof(bool)*numV);
		//g->adjacent[i]={false};
		for(j=0;j<numV;j++)
			g->adjacent[i][j]=false;
	}

	return g;
}

bool* getAdjacent(Graph G, Vertex v) // get the vertices adja$
{
	return G->adjacent[v->index];
}

Graph addEdge(Graph G, Vertex v, Vertex vAdj) // add edge (v, vAdj)
{
	G->adjacent[v->index][vAdj->index]=true;
}

int degree(Graph G, Vertex v) // get the degree of v
{
	int i,count=0;
	for(i=0; i < G->numV ;i++)
	{
		if(G->adjacent[v->index][i]==true)
			count++;
	}
	return count;
}
