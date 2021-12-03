#ifndef _HASH
#define _HASH
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int hashFunction(char string[],int baseNumber,int tableSize);
int collisionCount(char* stringArray[],int baseNumber,int tableSize,int numberOfStrings);
char** parseStrings(char* filename);
void profiler(char** book,int numberOfStrings);

#endif
