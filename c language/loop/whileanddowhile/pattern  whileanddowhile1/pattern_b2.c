#include<stdio.h>
int main()
{
	int i=1;
	//for(i=1;i<=5;i++)
	while(i<=5)
	{
		//for(j=1;j<=i;j++)
		int j=1;
		while(j<=i)
		{
		printf("%d\t",i);
		j++;
		}
		printf("\n",j);
		i++;
	}
}