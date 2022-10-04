#include<stdio.h>
int main()
{
	int i=5;
	do
	//for(i=5;i>=1;i--)
	{
		//for(j=5;j>=i;j--)
		int j=5;
		do
		{
			printf("\t%d",j);
			j--;
		}while(j>=i);
		printf("\n");
		i--;
	}while(i>=1);

}