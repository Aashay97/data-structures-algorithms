#include <stdio.h>

int bits=0;

void p(int k)
{
	printf("%u\n",&k);
	k++;
	p(k);
}

void g()
{
	unsigned int goa=0;
	printf("%u\n",&goa);
	p(0);
}

void h()
{
	unsigned int hyd=0;
	printf("%u\n",&hyd);
	p(0);
	printf("inside\n");
	g();
}

void d()
{
	long int dub=0;
	printf("%u\n",&dub);
	p(0);
	printf("inside\n");
	g();
	printf("inside\n");
	h();
}


int main()
{
	
	p(0);
	printf("--------------\n");
//	g();
//	printf("--------------\n");
//	h();
//	printf("--------------\n");
//	d();
	return 0;
}
