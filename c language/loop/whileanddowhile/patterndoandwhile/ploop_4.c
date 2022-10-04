#include<stdio.h>
int main()
{
	char i=65;
	//for(i=65;i<=69;i++)
	do
	{
		//for(j=65;j<=69;j++)
		int j=65;
		do
		{
		printf("\t%c",i);
		j++;
		}while(j<=69);	
		printf("\n",j);
		i++;
	}while(i<=69);


}