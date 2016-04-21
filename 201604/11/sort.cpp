#include<stdio.h>

int main()
{
		int array[10];
		int min=0;

		for(int i=0;i<sizeof(array)/sizeof(int);i++)
		{
				printf("入力してください%d回目",i+1);
				scanf("%d",&array[i]);
		}
	
		for(int i=0;i<10;i++)
		{
				min = i;
				for(int d=0;d<10;d++)
				{
						printf("%d\t",array[d]);
				}
				printf("\n");
				for(int j=i+1;j<10;j++)
				{
					if(array[min]>array[j])
					{
							min = j;
					}
				}
				int tmp=array[i];
				array[i]= array[min];
				array[min]=tmp;
		};
		for(int i=0;i<sizeof(array)/sizeof(int);i++)
		{
				printf("%d\t",array[i]);
		}
		return 0;
}
