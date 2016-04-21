#include<stdio.h>

int main()
{
	char str1[100+1];
	char str2[100+1];

	char *p1,*p2;

	printf("文字を入力してください\n");
	scanf("%s",str1);

	p1 = str1;
	p2 = str2;

	//null文字までループ
	while(*p1!='\0')
	{
		*p2++ = *p1++;
	}	
	*p2 = *p1; //null文字までコピーする
	
	printf("コピー元 %s\n",str1);
	printf("コピー先 %s\n",str2);
	return 0;
}
