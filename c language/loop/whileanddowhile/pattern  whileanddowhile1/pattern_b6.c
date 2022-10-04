#include<stdio.h>
int main()
{
	char i=65;
	while(i<=69)
	//for(i=65;i<=69;i++)
	{
		//for(j=65;j<=i;j++)
		int j=65;
		while(j<=i)
		{
		printf("\t%c",j);
		j++;
		}	
		printf("\n");
		i++;
	}


}