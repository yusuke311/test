#include<stdio.h>

int main()
{
		int year;

		printf("西暦は？");
		scanf("%d",&year);

		if(year%400==0)
		{
				printf("閏年です\n");
		}
		else if((year%4==0) && (year%100))
		{
				printf("閏年です\n");
		}
		else
		{
				printf("閏年ではありません\n");
		}
		return 0;
}
