#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	int s=11;
	
	
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",s);
			s++;
		}
		printf("\n");
	}
	
}
