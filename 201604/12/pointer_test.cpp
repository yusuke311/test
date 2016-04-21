#include<stdio.h>

int main()
{
	int a[2][3] ={ {10,20,30},{100,200,300}};

	int *pp[2];

	pp[0] = a[0];
	pp[1] = a[1];

	printf("%d\n",**pp);
	printf("%d\n",*(*(pp+1)+1));

	return 0;

