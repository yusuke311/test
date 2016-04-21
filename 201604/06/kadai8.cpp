#include<stdio.h>

int main()
{
		int num,sum=0;

		printf("整数値は？");
		scanf("%d",&num);

		for(int i=1;i<=num;i++)
		{
				sum+=i;
		}

		printf("合計値は%dです。\n",sum);
		return 0;
}
