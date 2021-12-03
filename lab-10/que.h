#ifndef QUE_H
#define QUE_H

#include <stdbool.h>
/*
#ifndef ELE
typedef struct element
{
        int k;
}Element;
#endif
*/

#include "graph.h"

typedef Vertex Element;

typedef struct node
{
        Element e;
        struct node* next;
}Node;

typedef struct
{
        Node* head;
        Node* tail;
        int size;
}Head;

typedef Head* Queue;

Queue newQ();
bool isEmptyQ(Queue q);
Queue delQ(Queue q);
Element front(Queue q);
Queue addQ(Queue q,Element e);
int lengthQ(Queue q);

#endif
