#include <stdlib.h>
#include "stack.h"
#include <stdbool.h>

Stack newStack()
{
	Stack s=(Head*)malloc(sizeof(Head));
	s->head=NULL;
	s->size=0;
	return s;
}

bool isEmpty(Stack s)
{
	if(s->size==0) return true;
	return false;
}

Stack pop(Stack s)
{
	if(!isEmpty(s))
	{
		Node* temp=s->head;
		s->head=temp->next;
		s->size--;
		free(temp);
	}
	return s;
}

Element top(Stack s)
{
	if(!isEmpty(s))
	{
		return s->head->e;
	}

	return ;
}

Stack push(Stack s,int lo,int hi)
{
	Node* n=(Node*)malloc(sizeof(Node));
	n->e.lo=lo;
	n->e.hi=hi;
	n->next=s->head;
	s->head=n;
	s->size++;
	return s;
}

int length(Stack s)
{
	return s->size;
}

