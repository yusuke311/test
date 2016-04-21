#include<stdio.h>
#define STR_ARRAY_SIZE 20
#define STR_SIZE	101
int main()
{
	char str[STR_ARRAY_SIZE][STR_SIZE];	//100文字+null文字
	int seek=0;
	printf("文字を入力してください\n");
	
	while(seek<STR_ARRAY_SIZE)
	{
		scanf("%s",str[seek]);
		//(qかQ)かつ次がnull文字の場合
		if((((str[seek][0] == 'q')||(str[seek][0] == 'Q'))&&
				(str[seek][1]=='\0')))
		{
			break;
		}
		seek++;
	}
	
	for(int i=0;i<seek;i++)
	{
		printf("%s\n",str[i]);
	}

	return 0;
}
