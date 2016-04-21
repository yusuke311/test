#include<stdio.h>

int main()
{
		int num;
		printf("数字を入力してください");
		scanf("%d",&num);


		for(int i=1;i<=num;i++)
		{
				//最初と最後
				if(i==1||i==num)
				{
						for(int j=1;j<=num;j++)
						{
								printf("*");
						}
				}
				else
				{
						printf("*");
						for(int j=1+1;j<=num-1;j++)
							{
									printf(" ");
							}
						printf("*");
				}
				printf("\n");
		}

}
