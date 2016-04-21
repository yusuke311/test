#include<stdio.h>

int main()
{
		printf("九九の表\n");

		for(int i=1;i<=9;i++)
		{
				for(int j=1;j<=9;j++)
				{
						printf("%d\t",i*j);
				}
				printf("\n");
		}
		return 0;
}
