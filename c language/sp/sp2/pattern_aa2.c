/* quation.aa2
                        1
                     2   2
                   3   3   3
                 4   4   4   4
               5   5   5   5   5 	
             5   5   5   5   5
               4   4   4   4
                 3   3   3
                   2   2
                     1
ans */
#include<stdio.h>
int main()
{
	int i,j,sp=10;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=sp;j++)
		printf("  ");
	for(j=1;j<=i;j++)
	{
		printf("   %d",i);
	}
	sp--;
	printf("\n");
	}
	for(i=5;i>=1;i--)
	{
	for(j=1;j<=sp;j++)
		printf("  ");
	for(j=1;j<=i;j++)
	{
		printf("   %d",i);
	}
	sp++;
	printf("\n");
	}
}

