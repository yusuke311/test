#include<stdio.h>

int main()
{
		int a,b;

		printf("2つの数字を入力してください\n");
		scanf("%d %d",&a,&b);

		printf("%d + %d = %d\n",a,b,a+b);
		printf("%d - %d = %d\n",a,b,a-b);
		printf("%d * %d = %d\n",a,b,a*b);
		printf("%d / %d = %d\n",a,b,a/b);
		printf("%d %% %d = %d\n",a,b,a%b);
		
		return 0;
}
