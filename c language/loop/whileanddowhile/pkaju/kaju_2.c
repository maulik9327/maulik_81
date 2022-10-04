#include<stdio.h>
int main()
{
	int i,sp=10;
	//for(i=1;i<=5;i++)
	int i1=1;
	do
	{
	//for(j=1;j<=sp;j++)
		int j=1;	
		do
		{
		printf("  ");
		j++;
		}while(j<=sp);
	//for(j=1;j<=i;j++)
		j=1;
		do
	              {
		printf("   %d",i1);
		j++;
               	}while(j<=i1);
	             i1++;
	sp--;
	printf("\n");
	}while(i1<=5);
	//for(i=5;i>=1;i--)
	int i2=5;
	do
	{
	//for(j=1;j<=sp;j++)
		int j=1;
		do
		{
		printf("  ");
		j++;
		}while(j<=sp);
	//for(j=1;j<=i;j++)
		j=1;
		do
		{
		printf("   %d",i2);
		j++;
		}while(j<=i2);
	i2--;
	sp++;
	printf("\n");
	}while(i2>=1);
}

