#include<stdio.h>
int main()
{
	int i=1;
	//for(i=1;i<=10;i=i+2)
	do
	{
		//for(j=1;j<=5;j++)
		int j=1;
		do
		{
		printf("\t%d",i);
		j++;
		}while(j<=5);	
		printf("\n",j);
		i=i+2;
	}while(i<=10);


}