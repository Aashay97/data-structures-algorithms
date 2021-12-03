#ifndef ITERATOR_H
#define ITERATOR_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
        int val;
        struct iterator* children;
};
typedef struct node* Element;

struct iterator
{
        Element earr;
        int curr;
        int size;
};
typedef struct iterator* Iterator;


bool hasMoreElements(Iterator it);
Element getNextElement(Iterator it);

#endif
