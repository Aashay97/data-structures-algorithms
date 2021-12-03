#include "merge.h"
#include <stdio.h>

int mergeParts()
{
	int k=1024;
	Element ls[k];
        FILE* fp=fopen("10240.txt","r");
	char name[9];
	int numfiles=0,i,j;

	while(!feof(fp))
	{
        	i=0;
		j=0;
        	while(!feof(fp) && i<k)
        	{
	                fscanf(fp,"%[a-z],%f\n",ls[i].Name,&ls[i].cgpa);
        	        i++;
        	}

                rMergeSort(ls,0,i-1);
		//printList(ls,i);
		sprintf(name,"%04i.txt",numfiles);
		numfiles++;

		FILE* out=fopen(name,"w");

		for(j=0;j<i;j++)
		{
			fprintf(out,"%s,%f\n",ls[j].Name,ls[j].cgpa);
		}
		fclose(out);
	}
	fclose(fp);
	return numfiles;
}

void mergeFiles(char file1[],char file2[],char fout[])
{
	FILE* fp1=fopen(file1,"r"),*fp2;
	if(file2!=NULL)
	{
		fp2=fopen(file2,"r");
	}

	else 	fp2=NULL;

	FILE* out=fopen(fout,"w");
	char name1[9],name2[9];
	float cgpa1,cgpa2;

	fscanf(fp1,"%[a-z],%f\n",name1,&cgpa1);
	fscanf(fp2,"%[a-z],%f\n",name2,&cgpa2);

	while(fp2!=NULL && !feof(fp1) && !feof(fp2));
	{
		if(cgpa1<=cgpa2)
		{
			fprintf(out,"%s,%f\n",name1,cgpa1);
			fscanf(fp1,"%[a-z],%f\n",name1,&cgpa1);
		}

		else
		{
			fprintf(out,"%s,%f\n",name2,cgpa2);
			fscanf(fp2,"%[a-z],%f\n",name2,&cgpa2);
		}

	}

	if(cgpa1<=cgpa2)
	{
                fprintf(out,"%s,%f\n",name1,cgpa1);
        	fprintf(out,"%s,%f\n",name2,cgpa2);
	}

	else
        {
        	fprintf(out,"%s,%f\n",name2,cgpa2);
		fprintf(out,"%s,%f\n",name1,cgpa1);
	}

	while(!feof(fp1))
	{
		fscanf(fp1,"%[a-z],%f\n",name1,&cgpa1);
                fprintf(out,"%s,%f\n",name1,cgpa1);
	}

	while(!feof(fp2))
	{
        	fscanf(fp1,"%[a-z],%f\n",name2,&cgpa2);
        	fprintf(out,"%s,%f\n",name2,cgpa2);
	}

	fclose(fp1);
	fclose(fp2);
	fclose(out);
}

void mergeSort()
{
	int outfileno=mergeParts();
	int infileno=0,fileno=outfileno;
	char name1[9],name2[9],outname[9];

	while(outfileno-infileno>1)
	{
		while(infileno<fileno)
		{
			sprintf(name1,"%04i.txt",infileno);
			infileno++;
			sprintf(outname,"%04i.txt",outfileno);
			outfileno++;

			if(infileno<fileno)
			{
				sprintf(name2,"%04i.txt",infileno);
	                        infileno++;
				mergeFiles(name1,name2,outname);
			}

			else mergeFiles(name1,NULL,outname);
		}

		fileno=outfileno;
	}
}
