/*
 *  * 文字列を逆順(リバース)して表示
 *  */
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
main()
{
	char str1[81], str2[81];
	int i, len;
	char *p1,*p2;

	p1 = str1;
	p2 = str2;
	/*これ以降はポインタを使:用する*/
	printf("文字列を入力してください = ");
	gets(p1);

	/* 入力された文字列の長さを調べる */
	len = strlen(p1);

	for (i = 0; *(p1+i) != '\0'; i++){
		*(p2+len - i - 1) = *(p1+i);
	}

	/* 文字列になるように最後にNULL 文字を代入 */
	 *(p2+len) = '\0';

	 printf("もと = %s\n", p1);
	 printf("結果 = %s\n", p2);

}
