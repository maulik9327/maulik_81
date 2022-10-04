#include<stdio.h>
int main()
{
	int i=5;
	//for(i=5;i>=1;i--)
	do
	{
		//for(j=5;j>=1;j--)
		int j=5;
		do
		{
			printf("\t%d",i);	
			j--;
		}while(j>=1);
		printf("\n");
		i--;
	}while(i>=1);

}