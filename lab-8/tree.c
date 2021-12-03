#include "tree.h"

int getrandom()
{
	return (rand()%20)+150;
}

Tree createTree()
{
	Tree t=(Tree)malloc(sizeof(struct node));
	t->val=getrandom();
	t->left=NULL;
	t->right=NULL;
	t->balance=0;
	return t;
}

/*void balanceNode(Tree t)
{

}*/

Tree addNode(Tree t,Tree newnode)
{
	Tree temp=t;
	while(1)
	{
		if(temp->val < newnode->val)
		{
			if(temp->right!=NULL)
				temp=temp->right;
			else
			{
				temp->right=newnode;
				return t;
			}
		}

		else
                {
                        if(temp->left!=NULL)
                                temp=temp->left;
                        else
                        {
                                temp->left=newnode;
                                return t;
                        }
                }
	}
}

Tree findNode(Tree t,Value v)
{
	Tree temp=t;
	while(temp!=NULL)
	{
		if(temp->val==v) return temp;

		else if(temp->val<v)
			temp=temp->right;
		else
			temp=temp->left;
	}
	return NULL;
}

/*
Tree delete(Tree t,Value v)
{
	Tree temp=t;
	Tree prev=NULL;
        while(temp!=NULL)
        {
                if(temp->val==v) break;

                else if(temp->val<v)
			prev=temp;
                        temp=temp->right;
                else
			prev=temp;
                        temp=temp->left;
        }


	if(temp==NULL) return t;

	if(temp->right==NULL)
	{
		if(temp->left==NULL)
		{
			if(prev==NULL)
				free(temp);

			else if(prev->val < temp->val)
				prev->right=NULL;
				free(temp);

			else
				prev->left=NULL;
				free(temp);

			return
		}

		else
		{
			;
		}
	}

	Tree succ=t->right;
	while(succ->left->left!=NULL)
	{
		succ=succ->left;
	}
}*/

struct node* minValueNode(struct node* node)
{
    struct node* current = node;

    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;

    return current;
}

struct node* deleteNode(struct node* root, int key)
{
    // base case
    if (root == NULL) return root;

    // If the key to be deleted is smaller than the root's key,
    // then it lies in left subtree
    if (key < root->val)
        root->left = deleteNode(root->left, key);

    // If the key to be deleted is greater than the root's key,
    // then it lies in right subtree
    else if (key > root->val)
        root->right = deleteNode(root->right, key);

    // if key is same as root's key, then This is the node
    // to be deleted
    else
    {
        // node with only one child or no child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }

	if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        // node with two children: Get the inorder successor (smallest
        // in the right subtree)


        struct node* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->val = temp->val;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->val);
    }
    return root;
}

void printInOrder(Tree t)
{
	if(t==NULL) return;

	printInOrder(t->left);

	printf("%d\n",t->val);

	printInOrder(t->right);
}

rotate(Tree bt, Tree X, Tree Y, Tree Z)
{


}
