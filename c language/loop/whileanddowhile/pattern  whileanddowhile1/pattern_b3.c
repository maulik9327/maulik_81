#include<stdio.h>
int main()
{
	int i=5;
	//for(i=5;i>=1;i--)
	do
	{
		//for(j=i;j<=5;j++)
		int j=i;
		do
		{
		printf("%d\t",i);
		j++;
		}while(j<=5);
		printf("\n");
		i--;
	}while(i>=1);
}