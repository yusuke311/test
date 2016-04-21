#include<stdio.h>

int main()
{
		//格納用変数
		int num[10];
		//合計を格納する変数
		int sum=0;

		printf("入力してください\n");
		//１０個の入力を配列に格納する
		for(int i=0;i<10;i++)
		{
				scanf("%d",&num[i]);
		}

		//合計を求める
		for(int i=0;i<10;i++)
		{
				sum+=num[i];
		}

		printf("合計は%d\n",sum);
		printf("平均は%f\n",sum/10.0);
		return 0;
}
