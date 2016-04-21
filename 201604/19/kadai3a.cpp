#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
#define STR_ARRAY_SIZE	20
#define STR_SIZE 101
void strsort(char str[][STR_SIZE],int listsize)
{
	for(int i=0;i<listsize;i++)
	{
		for(int j=(listsize-1); j>i; j--)
		{
			if(strcmp(str[j],str[j-1]) < 0 )
			{
				char tmp[STR_SIZE];
				strcpy(tmp,str[j]);
				strcpy(str[j],str[j-1]);
				strcpy(str[j-1],tmp);
			}
		}
	}
}
int main()
{
	char str[STR_ARRAY_SIZE][STR_SIZE];	//100文字+null文字
	int seek=0;//文字列配列の個数(入力時は番地)

	printf("文字を入力してください\n");

	//配列格納数が20未満の場合ループ
	while(seek<STR_ARRAY_SIZE)
	{
		scanf("%s",str[seek]);

		//(qかQ)かつ次がnull文字の場合
		if( ((str[seek][0] == 'q')||(str[seek][0] == 'Q'))&&
				str[seek][1]=='\0' )
		{
			break;
		}
		seek++;
	}
	
	strsort(&str[0],seek);
	
	printf("ソート結果\n");
	for(int i=0;i<seek;i++)
	{
		printf("%s\n",str[i]);
	}

	return 0;
}
