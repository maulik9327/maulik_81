#include<stdio.h>
int main()
{
	int i=1,n=65;
	char ch='a';
	//for(i=1;i<=5;i++)
	do
	{
		//for(j=1;j<=i;j++)
		int j=1;
		do
		{
		if(i%2==0)
		printf("\t%c",n+32);
		else	
		printf("\t%c",n);
		n++;
		j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=5);
	return 0;
}