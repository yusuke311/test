#include<stdio.h>


void strrev(char *str)
{
	int length=0;
	while(str[length] != '\0')length++;	//文字列の長さを見る
	
	length--;
	for(int i=0;i<=length/2;i++)
	{
		char tmp = str[i];
		str[i] = str[length - i];
		str[length-i] = tmp;
	}
}

int main()
{
	char str[256];

	scanf("%s",str);
	strrev(str);

	printf("strrev=%s\n",str);
	return 0;
}
