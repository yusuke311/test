#include<stdio.h>

int main()
{
		double a,b;

		printf("2つの数字を入力してください\n");
		scanf("%lf %lf",&a,&b);

		printf("%lf + %lf = %lf\n",a,b,a+b);
		printf("%lf - %lf = %lf\n",a,b,a-b);
		printf("%lf * %lf = %lf\n",a,b,a*b);
		printf("%lf / %lf = %lf\n",a,b,a/b);
		//printf("%lf %% %lf = %lf\n",a,b,a%b);
		
		return 0;
}
