#include<stdio.h>
int main()
{
	int i=1,n=1;
	//for(i=1;i<=5;i++)
	while(i<=5)	
	{			
		//for(j=1;j<=5;j++)
		 int j=1;
		while(j<=5)
		{
		printf("\t%d",n);
		j++;
		n++;
		}	
		printf("\n ");
		i++;
	}
}