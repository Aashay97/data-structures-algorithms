#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct
{
	int hi;
        int lo;
}Element;

typedef struct node
{
	Element e;
        struct node* next;
}Node;

typedef struct
{
        Node* head;
        int size;
}Head;

typedef Head* Stack;

Stack newStack();
bool isEmpty(Stack s);
Stack pop(Stack s);
Element top(Stack s);
Stack push(Stack s,int lo,int hi);
int length(Stack s);

#endif
