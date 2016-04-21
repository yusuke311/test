#include<stdio.h>

int main()
{
		int num;
		printf("数字を入力してください");
		scanf("%d",&num);

		for(int i=1;i<=num;i++)
		{
				for(int j=1;j<=num;j++)
				{
						if(i==1||i==num||j==1||j==num)		printf("*");
						else 							 printf(" ");
				}
				printf("\n");
		}
}
