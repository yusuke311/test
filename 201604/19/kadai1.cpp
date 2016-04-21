#include<stdio.h>

int is_chartype(char ch)
{
	if('a'<=ch && ch <= 'z')
	{
		return 1;
	}
	else if('A'<=ch && ch <= 'Z')
	{
		return 2;
	}
	else if('0'<=ch && ch <= '9')
	{
		return 3;
	}
	else
	{
		return 0;
	}

}


int main()
{
	char ch;
	printf("1文字入力してください\nCTRL+Dで終了");
	while((scanf("%c",&ch)) !=EOF)
	{
		getchar();
		printf("is_chartype=%d\n",is_chartype(ch));
	}

	return 0;
}
