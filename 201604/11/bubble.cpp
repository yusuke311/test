#include<stdio.h>

int main()
{
		int array[10];
		int loopcounter=0;	
		for(int i=0;i<10;i++)
		{
				printf("数値%d回目",i+1);
				scanf("%d",&array[i]);
		}
		for(int i=0;i<10;i++)
		{
				printf("大ループ%d回目\n",i+1);
				for(int j=10-1;j>i;j--)
				{
						loopcounter++;
						if(array[j]<array[j-1])
						{
								int tmp = array[j-1];
								array[j-1] = array[j];
								array[j] = tmp;
								for(int k=0;k<10;k++)
								{
										printf("%d\t",array[k]);
								}
								printf("\n");
						}
				}
		}

				for(int i=0;i<10;i++)
				{
						printf("%d\t",array[i]);
				}
				printf("\n");
				printf("ループ回数=%d\n",loopcounter);

		return 0;
}
