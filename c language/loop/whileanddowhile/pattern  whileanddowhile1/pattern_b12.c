#include<stdio.h>
int main()
{
	char i=0,n=5;
	//for(i=0;i<n;i++)
	do
	{
		//for(j=i;j>=0;j--)
		int j=i;
		do
		{
		printf("\t%c",j+65);
		j--;
		}while(j>=0);	
		printf("\n");
		i++;
	}while(i<=n);


}