#include<stdio.h>
int main()
{
	int i=1,a=1;
	//for(i=1;i<=5;i++)
	while(i<=5)
	{
		//for(j=1;j<=i;j++)
		int j=1;
		while(j<=i)
		{
		if(i%2==1)
		{
		printf("\t1");
		a++;
		}
		else
		{
		printf("\t0");
		a++;
		}
		j++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
}