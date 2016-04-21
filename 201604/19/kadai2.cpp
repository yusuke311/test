#include<stdio.h>

int z_counter(char *str)
{
	int counter=0;
	while(*str !='\0')
	{
		if(*str== 'z')
		{
			counter++;
		}
		str++;
	}
	return counter;
}

int main()
{
	char str[256];
	printf("文字を入力してください\nzの数を出力します\n");
	scanf("%s",str);

	printf("zの数は%dです\n",z_counter(str));
	

	return 0;
}
