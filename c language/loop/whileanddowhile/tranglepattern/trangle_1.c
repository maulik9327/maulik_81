#include<stdio.h>
int main()
{
	int i=1,sp=10;
	while(i<=5)
	{
		int j=1;
		while(j<=sp)
		{
		printf("  ");
		j++;
		}
	j=1;
	while(j<=i)
	{
		printf("   %d",j);
		j++;
	}
	sp--;
	printf("\n");
	i++;
	}
}