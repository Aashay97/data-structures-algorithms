#include <stdlib.h>
#include "que.h"
#include <stdbool.h>

Queue newQ()
{
	Queue q=(Head*)malloc(sizeof(Head));
	q->head=NULL;
	q->tail=NULL;
	q->size=0;
	return q;
}

bool isEmptyQ(Queue q)
{
	if(q->size==0) return true;
	return false;
}

Queue delQ(Queue q)
{
	if(!isEmptyQ(q))
	{
		Node* temp=q->head;
		q->head=temp->next;
		q->size--;
		if(q->size==0)
		{
			q->tail=NULL;
		}
		free(temp);
	}
	return q;
}

Element front(Queue q)
{
	if(!isEmptyQ(q))
	{
		return q->head->e;
	}

	return NULL;
}

Queue addQ(Queue q,Element e)
{
	Node* n=(Node*)malloc(sizeof(Node));
	n->e=e;
	n->next=NULL;
	if(q->size==0)
	{
		q->head=n;
	}
	else
	{
		q->tail->next=n;
	}
	q->tail=n;
	q->size++;
	return q;
}

int lengthQ(Queue q)
{
	return q->size;
}

