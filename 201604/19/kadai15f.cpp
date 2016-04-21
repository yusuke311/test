#include<stdio.h>


bool is_numeric(const char *str)
{
	int dotcount=0;

	//1桁目のみ
	for( ;*str != '\0';str++)
	{
		if(('0' <= *str && *str <= '9')||
				(*str == '+') ||(*str == '-'))
		{
			str++;
			break;	//1文字目OK
		}
		else
		{
			return false;
		}
	}

	//2桁目から
	for(;*str != '\0';str++)
	{
		if( '0' <= *str && *str <= '9');

		//1度だけ小数点が許される
		else if( (*str == '.') && !dotcount)
		{
			dotcount = 1;
		}
		else
		{
			return false;
		}
	}
	return true;

}
int main()
{
	char str[256];
	scanf("%s",str);

	if( is_numeric(str))
	{
		printf("数字です\n");
	}
	else
	{
		printf("数字ではありません\n");
	}
	return 0;
}
