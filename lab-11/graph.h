#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct vertex
{
	bool flag;
	int indeg;
	int outdeg;
}* Vertex;

typedef struct edgeList
{
	int numedges;
	int** edges;
	Vertex varr;
	int varrsize;
}* EdgeList;

typedef struct node
{
	struct node* next;
	int num;
}* Node;

typedef struct adjList
{
	Node* arrnode;
	int size;
}* AdjList;


EdgeList readedges(char* fname);
void printedges(EdgeList e);
void printver(EdgeList e);
void topoSort(EdgeList e);

#endif
