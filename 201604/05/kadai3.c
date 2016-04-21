#include<stdio.h>

int main()
{
		int num;
		int i;
		printf("数字を入力してください。");
		scanf("%d",&num);

		i=1;
		while(i<=num)
		{
				printf("%d\n",i);
				i++;
		}
		return 0;
}

