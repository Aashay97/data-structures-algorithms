#ifndef QUE
#define QUE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct element
{
        char* string;
}Element;

typedef struct node
{
        struct node* next;
        Element* element;
}Node;

typedef struct
{
        Node* head;
        int size;
}Head;

typedef Head* Queue;

Queue newQ();
bool isEmptyQ(Queue q);
Queue delQ(Queue q);
//Element front(Queue q);
Queue addQ(Queue q,char* string);
int lengthQ(Queue q);
Element* findElement(Queue q,char* string);
#endif
