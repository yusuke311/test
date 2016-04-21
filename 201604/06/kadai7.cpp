#include<stdio.h>

int main()
{
		int year,month;
		//2 4 6 9 11 -> 30か28
		int daylist[]={31,28,31,30,31,30,31,31,30,31,30,31};

		do{
				printf("西暦と月を入力してください");
				scanf("%d %d",&year,&month);
		}while(month<1||12<month);

		if(year%400==0)
		{
				daylist[1]++;
		}
		else if((year%4==0) && (year%100))
		{
				daylist[1]++;
		}

		printf("月末日は%d日です\n",daylist[month-1]);
		return 0;
}
