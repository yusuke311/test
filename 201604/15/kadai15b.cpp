#include<stdio.h>
#include<string.h>

void ltrim(char *str);
void rtrim(char *str);
void trim(char *str);
int main()
{
	char basestr[256];
	char ltstr[256];
	char rtstr[256];
	char tstr[256];
	printf("文字を入力してください\n");	
	scanf("%[^\n]",basestr);
	strcpy(ltstr,basestr);
	strcpy(rtstr,basestr);
	strcpy(tstr,basestr);

	ltrim(ltstr);
	rtrim(rtstr);
	trim(tstr);


	printf("ltstr=%sEND\n",ltstr);
	printf("rtstr=%sEND\n",rtstr);
	printf("tstr=%sEND\n",tstr);
	return 0;

}
void ltrim(char *str)
{
	int cnt=0;
	//先頭位置を記憶する
	char *headp = str;
	while(*str!='\0')
	{
		if(*str!=' ' && *str != '\t')
		{
			break;
		}
		str++;
	}
	for( cnt = 0;*str!='\0';cnt++)
	{
		headp[cnt] = *str++;
	}
	headp[cnt] = '\0';
}
void rtrim(char *str)
{
	int length=0;
	while(*str !='\0')
	{
		length++;
		str++;
	}
	printf("len=%d\n",length);
	str--;
	length--;
	while(0<=length)
	{
		if(*str!= ' '&& *str!='\t')
		{
			break;
		}
		*str-- = '\0';
	}
}
void trim(char *str)
{
	ltrim(str);
	rtrim(str);
}
