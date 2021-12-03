#ifndef ITERATOR_H
#define ITERATOR_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
	int val;
	struct node* next;
	struct iterator* children;
};
typedef struct node* Element;

struct iterator
{
	Element elist;
	Element curr;
};
typedef struct iterator* Iterator;

bool hasMoreElements(Iterator it);
Element getNextElement(Iterator it);

#endif
