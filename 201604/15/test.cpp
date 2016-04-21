#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void escape(char str[])
{
    int length = strlen(str);
    char *p = str;
	int count =0;
    //左側から消していく
    for(int i = 0; i < length; i++)
    {
            printf("16:%c\n",str[i]);
        if(*str == ' ')//||(str[i] == '\t')||(str[i] =='\n'))
        {
			count++;
            str++;
        }else{
            break;
        }
    }
	printf("count=%d\n",count);
        printf("21:%c\n",*str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        *p++ = str[i];
    }
    *p = '\0';
}

void escaperight(char str[])
{   
	//右側から消していく
   int length = strlen(str);
    for(int j = length-1 ; j > 0 ; j--)
    {
        if((str[j] == ' ') || (str[j]=='\t')||(str[j]=='\n'))
        {
            str[j] ='\0';
        }else{
            break;
        }

    }
}

int main()
{
    char str[100];
    printf("input strings.\n");
    scanf("%[^\n]",str);
    escape(str);
    //escaperight(str);
    printf("\nescaped strings:%s\n",str);
    return 0;
}

