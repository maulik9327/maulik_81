#include<stdio.h>
int main()
{
	int i=1;
	//for(i=1;i<=5;i++)
	do
	{
		//for(j=1;j<=i;j++)
		int j=1;
		do
		{
		printf("\t%d",j);
		j++;
		}while(j<=i);
		printf("\n",j);
		i++;
	}while(i<=5);
}