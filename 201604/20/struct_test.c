#include<stdio.h>

#define		PERSON_MAX_NUM	5

typedef struct
{
	char name[40 + 1];
	char addr[80 + 1];
	int age;

}PERSON;

void inputdata(PERSON *person, int size)
{
	printf("情報を入力してください\n");

#if 0
	for(int i = 0; i < size; i++)
	{
		printf("%d人目\n",i+1);
		printf("お名前は？");
		scanf("%s",Person[i].name);
		printf("住所は？");
		scanf("%s",Person[i].addr);
		printf("年齢は？");
		scanf("%d",&Person[i].age);
	}
#else

	for(int i = 0; i < size; i++,person++)
	{
		printf("----------------%d人目----------------\n",i+1);
		printf("お名前は？");
		scanf("%s",person->name);
		printf("住所は？");
		scanf("%s",person->addr);
		printf("年齢は？");
		scanf("%d",&person->age);
	}
#endif
}

int main(void)
{
	PERSON Person[PERSON_MAX_NUM];

	inputdata(Person, PERSON_MAX_NUM);

	printf("*******************出力結果*******************\n");
	for(int i = 0; i < PERSON_MAX_NUM; i++)
	{
		printf("----------------%d人目----------------\n",i+1);
		printf("名前：%s\n",Person[i].name);
		printf("住所：%s\n",Person[i].addr);
		printf("年齢：%d\n",Person[i].age);

	}
	return 0;
}
