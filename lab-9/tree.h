//#include "itarray.h"
#include "itlist.h"

typedef Element Tree;

int randnum(int num);
Tree createTree(int chi,int height);
bool isEmptyTree(Tree t);
int getRootVal(Tree t);
Iterator getChildren(Tree t);
