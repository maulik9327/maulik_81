#include<stdio.h>
int main()
{
	int i,j,a=1,sp=10;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
			printf("  ");
		for(j=1;j<=i;j++)
		{
		if(i%2==1)
		{
		printf(" 1  ");
		a++;
		}
		else
		{
		printf(" 0  ");
		a++;
		}
		}
		printf("\n");
	}
	sp--;
	printf(" \n ");
}