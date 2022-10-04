#include<stdio.h>
int main()
{
	char i,j,sp=10,n=5;
	for(i=0;i<n;i++)
	{
		for(j=i;j<=sp;j++)
			printf("  ");
		for(j=i;j>=0;j--)
		{
		printf("   %c   ",j+65);
		}
		sp--;	
		printf("\n");
	}


}