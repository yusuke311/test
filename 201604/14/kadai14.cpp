#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_NUM 1000
int main()
{
	int numlist[MAX_NUM];	//データ群
	int scannum;			//探す値
	int maxindex=MAX_NUM;	//検索範囲最大値
	int minindex=0;			//検索範囲最小値
	int seeknum;			//現在番地
	int counter=1;			//検索回数

	//ランダム値を生成する
	srand((int)time(NULL));
	numlist[0]= rand()%5;
	for(int i=1;i<MAX_NUM;i++)
	{
		numlist[i]=numlist[i-1]+ rand()%5+1;
	}
	
	//データ群を出力する
	for(int i=0;i<MAX_NUM;i++)
	{
		if(i && !(i%5))
		{
			printf("\n");
		}
		printf("[%2d]=%3d\t",i,numlist[i]);
	}
	printf("\n");

	printf("探したい文字は？");
	scanf("%d",&scannum);

	//逆転するまでループ
	while(minindex<=maxindex)
	{
		seeknum = (minindex+maxindex)/2;
		printf("%d回目\n",counter);
		if(numlist[seeknum] == scannum)
		{
			printf("%d回目に%dがnumlist[%d]に見つかりました\n",counter,scannum,seeknum);
			break;
		}
		else if( numlist[seeknum] > scannum )
		{
				maxindex=seeknum-1;
		}
		else
		{
			minindex = seeknum+1;
		}
		counter++;
	}
	if(minindex>maxindex)
	{
		printf("%dは見つかりませんでした\n",scannum);
	}
	

	return 0;
}
