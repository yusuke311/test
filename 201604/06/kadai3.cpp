#include<stdio.h>

int main()
{
		int num;

		printf("整数値を入力してください");
		scanf("%d",&num);

		for(int i=1;i<=num;i++)
		{
				printf("%d\n",i);
		}
		return 0;
}
