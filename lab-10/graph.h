#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct vertex
{
	int val;
	int index;
} *Vertex;

typedef struct graph
{
	Vertex varr;
	int numV;
	bool** adjacent;
} *Graph;

Graph createGraph(int numV);
bool* getAdjacent(Graph G, Vertex v); // get the vertices adjacent to v
Graph addEdge(Graph G, Vertex v, Vertex vAdj); // add edge (v, vAdj)
int degree(Graph G, Vertex v); // get the degree of v
void bfs(Graph g, int index);

#endif
