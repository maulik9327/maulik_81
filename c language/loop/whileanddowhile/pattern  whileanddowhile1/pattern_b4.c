#include<stdio.h>
int main()
{
	int i=1,n=1;
	//for(i=1;i<=5;i++)
	while(i<=5)
	{
		//for(j=1;j<=i;j++)
		int j=1;
		while(j<=i)
		{
		printf("\t%d",n);
		n++;
		j++;
		}
		printf("\n");
		i++;
	}
}