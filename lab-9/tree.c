#include "tree.h"

int randnum(int num)
{
	return rand()%num;
}

/*Tree addNode(int n)
{

}*/

Tree createTree(int chi,int height)
{
	if(height==0) return NULL;

	Tree root=(Tree)malloc(sizeof(struct node));
	root->val=randnum(10000);
	root->children=(Iterator)malloc(sizeof(struct iterator));
	//root->children->elist=malloc(sizeof(struct node));
	root->children->elist=createTree(randnum(10),--height);
	root->children->curr=root->children->elist;
	Element temp=root->children->elist;
	if(temp==NULL) return root;

	int i;
	for(i=0;i<chi-1;i++)
	{
		temp->next=createTree(randnum(10),height);
		temp=temp->next;
	}
	return root;
}


/*void createT(Tree t,int height)
{

}*/


bool isEmptyTree(Tree t)
{
	return t==NULL;
}

int getRootVal(Tree t)
{
	if(!isEmptyTree(t))
	 return t->val;

	return -1;
}

Iterator getChildren(Tree t)
{
	if(!isEmptyTree)
		t->children->curr=t->children->elist;
		return t->children;
	return NULL;
}
