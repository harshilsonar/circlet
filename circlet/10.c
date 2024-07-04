#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	int s;
	
	for(i=1;i<=5;i++)
	{
		for(s=1;s>i;s--)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			if((i+j)%2=0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
