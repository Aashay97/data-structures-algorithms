#include "graph.h"
#include <time.h>
int main()
{
	srand(time(NULL));

	Graph g=createGraph(6);
	g=addEdge(g,g->varr+2,g->varr+4);
	g=addEdge(g,g->varr+4,g->varr+2);
	g=addEdge(g,g->varr+1,g->varr+2);
	g=addEdge(g,g->varr+3,g->varr+5);
	g=addEdge(g,g->varr+5,g->varr+6);
	g=addEdge(g,g->varr+4,g->varr+3);

	bfs(g,4);

	return 0;
}
