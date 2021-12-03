#include "hash.h"

int hashFunction(char string[], int baseNumber,int tableSize){
	int i,sum=0;
	int length=strlen(string);
	for(i=0;i<length;i++){
		sum+=(int)string[i];
	}
	return (sum%baseNumber)%tableSize;
}


int collisionCount (char* stringArray[],int baseNumber,int tableSize,int numberOfStrings){
	int numberOfCollisions=0,i,hash;
	int* hashes=(int*)malloc(numberOfStrings*sizeof(int));
	for(i=0;i<numberOfStrings;i++){
		hashes[i]=0;
	}
	for(i=0;i<numberOfStrings;i++){
		hash=hashFunction(stringArray[i],baseNumber,tableSize);
		hashes[hash]+=1;
		if(hashes[hash]>1){
			numberOfCollisions+=1;
		}
	}
	return numberOfCollisions;
}

char** parseStrings(char* filename){
	FILE* fp = fopen(filename,"r");
	char c=fgetc(fp);
	char* string=(char*)malloc(sizeof(char)*200);
	int i=0,capacity=100,j=0,flag=0;
	char** strings=(char**)malloc(sizeof(char*)*capacity);
//	while(fscanf(fp,"%[^A-Za-z] ",string)!=EOF && i<capacity){

	while(c!=EOF)
	{
		ungetc(c,fp);
		strings[i]=(char*)malloc(sizeof(char)*100);
		/*j=0;
		if(c==' ')
		{
		c=fgetc(fp);
		if(isalpha(c))
		{
		while(isalpha(c))
		{
                        string[j]=c;
                        j++;
			c=fgetc(fp);
                }

		if(c==' ')
		{*/

		fscanf(fp,"%s",string);

		//string[j]='\0';
		for(j=0;j<strlen(string);j++)
		{
			if(!isalpha(string[j]))
			{
				c=fgetc(fp);
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			flag=0;
			continue;
		}
		strcpy(strings[i],string);
		if(i==capacity-1)
		{
			capacity*=2;
			strings=(char**)realloc(strings,sizeof(char*)*capacity);
		}
			printf("%s\n",strings[i]);
			i++;
		/*}
		}

		}*/
		c=fgetc(fp);
	}
	printf("Number of strings: %d\n",i);
	fclose(fp);
	return strings;
}

void profiler(char** book,int numberOfStrings){
	int i,j,k;
	int baseNumbers[]={83, 89, 97,1000003,1000033,1000037};
	int tableSizes[]={50,100,500};
	int collisions=0;
	for(j=0;j<6;j++){
		for(k=0;k<3;k++){
			 printf("Number of collisions: %d,baseNumber=%d,tableSize=%d\n",collisionCount(book,baseNumbers[j],tableSizes[k],numberOfStrings),baseNumbers[j],tableSizes[k]);
		}
	}
}
