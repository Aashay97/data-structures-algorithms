#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int Value;

struct node
{
	Value val;
	struct node* left;
	struct node* right;
	int balance:2;
};

typedef struct node* Tree;

int getrandom();
Tree createTree();
Tree addNode(Tree t,Tree newnode);
Tree findNode(Tree t,Value v);
struct node* deleteNode(struct node* root, int key);
void printInOrder(Tree t);

#endif
