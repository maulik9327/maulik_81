#include<stdio.h>
int main()
{
	
	char i=1,n=65;
	//for(i=1;i<=5;i++)
	do		
	{			
		//for(j=1;j<=5;j++)
		char j=1;
		do
		{
		printf("\t%c",n);
		j++;
		n++;
		}while(j<=5);
		i++;	
		printf("\n");
	}while(i<=5);
}