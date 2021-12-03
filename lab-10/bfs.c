
#include "que.h"

void visit(Vertex v)
{
	printf("%d\n",v->val);
}

void bfs(Graph g, int index)
{
	Queue q=newQ();
	bool visited[g->numV],*adj;
	int i;
	Vertex curr;

	for(i=0;i< g->numV ;i++)
		visited[i]=false;

	visited[index]=true;

	addQ(q,g->varr+index);

	while(!isEmptyQ(q))
	{
		curr=front(q);
		q=delQ(q);

		visit(curr);
		adj=getAdjacent(g,curr);
		for(i=0; i< g->numV ;i++)
		{
			if(adj[i] && !visited[i])
			{
				visited[i]=true;
				q=addQ(q,g->varr+i);
			}
		}
	}
}
