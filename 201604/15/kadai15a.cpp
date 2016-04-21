#include<stdio.h>

//プロトタイプ宣言
void strtoupper(char *str);
void strtolower(char *str);

int main()
{
	char str[256];
	
	printf("文字を入力してください\n");
	scanf("%s",str);

	strtoupper(str);
	printf("strtoupper=%s\n",str);
	strtolower(str);
	printf("strtolower=%s\n",str);
	
	return 0;
}

void strtolower(char *str)
{
	while(*str!='\0')
	{
		if(( 'A' <= *str) && (*str <='Z'))
		{
			*str +='a' - 'A';
		}
		str++;
	}
}
void strtoupper(char *str)
{
	while(*str!='\0')
	{
		if(( 'a' <= *str) && (*str <='z'))
		{
			*str -='a' - 'A';
		}
		str++;
	}

	
}
