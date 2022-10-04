#include<stdio.h>
int main()
{
	int i=1,sp=10;
	do
	{
		int j=1;
		do
		{
		printf("  ");
		j++;
		}while(j<=sp);
	  	j=1;
		do
		{
		printf("   %d",i);
		j++;
		}while(j<=i);
		sp--;
		printf("\n");
		i++;
		}while(i<=5);
}