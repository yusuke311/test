#include<stdio.h>

int main()
{
	int sum=0;
	double ave=0;//平均を入れる変数：入れられる前は個数を格納する

	while(1)
	{
		int num;
		printf("数値を入力してください\n");
		if(scanf("%d",&num)==EOF)
		{
			break;
		}
		sum+=num;
		ave++;
	}

	ave = sum / ave;
	printf("合計は%d\n",sum);
	printf("平均は%f",ave);
	return 0;
}

