#include<stdio.h>
int main()
{
	int i=2;
	//for(i=2;i<=10;i=i+2)
	while(i<=10)
	{
		//for(j=1;j<=5;j++)
		int j=1;
		while(j<=5)
		{
		printf("\t%d",i);
		j++;
		}	
		printf("\n",j);
		i=i+2;
	}


}