#include<stdio.h>

#define NUM 5

int main()
{
	int a[2][3]={{10,20,30},{100,200,300}};

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("a[%d][%d]=%3d\t",i,j,a[i][j]);
		}
		printf( "\n" );
	}
	if( a[ 0 ] [ 0 ] == 0 )
	{
		;
	}
	return 0;
}		
