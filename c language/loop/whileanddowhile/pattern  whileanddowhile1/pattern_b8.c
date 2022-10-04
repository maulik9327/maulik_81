#include<stdio.h>
int main()
{
	char i=1,n=97;
	while(i<=5)
	//for(i=1;i<=5;i++)
	{
	//for(j=1;j<=i;j++)
	int j=1;
	while(j<=i)
	{	
	printf("\t%c",n);
	n++;
	j++;
	}
	printf("\n");
	i++;
	}
	
}