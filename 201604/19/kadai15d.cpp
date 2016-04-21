#include<stdio.h>

void substr(char *input,char *output,int start,int length)
{
	int maxlength=0;
	
	while(input[maxlength] != '\0')maxlength++;
	if(maxlength<start)return;	//文字列外

	for(int i=0;i<length;i++)
	{
		if(input[start+i] == '\0') break;

		*output++ = input[start + i];
	}
	*output = '\0';
}

int main()
{
	char str[256];

	scanf("%s",str);

	substr(str,str,5,3);

	printf("substr=%s\n",str);

	return 0;
}
