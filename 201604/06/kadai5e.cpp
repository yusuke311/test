#include<stdio.h>

int main()
{
		int num;

		printf("底辺は？");
		scanf("%d",&num);
		for(int i=1;i<=num;i++)
		{
				for(int k=num-i;k>=1;k--)	printf(" ");
				for(int j=1;j<=i*2-1;j++)	printf("*");
				printf("\n");
		}
		for(int i=num-1;i>=1;i--)
		{
				for(int k=num-i;k>=1;k--)	printf(" ");
				for(int j=1;j<=i*2-1;j++)	printf("*");
				printf("\n");
		}

}
