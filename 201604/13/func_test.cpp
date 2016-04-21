#include<stdio.h>

int sikaku(int tate,int yoko);
int sankaku(int teihen,int takasa);
double Ave(int num1,int num2);
void SumAndSub(int num1,int num2,int *Sum,int *Sub);

int main()
{
	int tate;
	int yoko;
	int a;
	int b;
	int ave;
	tate = 10;
	yoko = 5;

	a = sankaku(tate,yoko);
	b = sikaku(tate,yoko);
	ave = Ave(tate,yoko);

	printf("sikaku = %d\n",b);
	printf("sankaku = %d\n",a);
	printf("Ave = %d\n",ave);

	SumAndSub(tate,yoko,&a,&b);
	printf("Sum = %d\n",a);
	printf("Sub = %d\n",b);


	return 0;
}

int sikaku(int tate,int yoko)
{
	return tate*yoko;
}
int sankaku(int teihen,int takasa)
{
	return teihen*takasa/2;
}

double Ave(int num1,int num2)
{
	return (double)num1/(double)num2;
}
void SumAndSub(int num1,int num2,int *Sum,int *Sub)
{
	*Sum = num1+num2;
	*Sub = num1 - num2;
}
