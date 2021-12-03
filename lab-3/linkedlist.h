#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "heap.h"

typedef struct node
{
	struct node* next;
	int N;
}Node;

typedef struct
{
	Node* head;
	int size;
}Head

typedef Head* List;

List createList(int N);
List createCycle(List ls);

#endif

