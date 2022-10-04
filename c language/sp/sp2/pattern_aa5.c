/* quation.aa5
                      5
                   5   4
                 5   4   3
               5   4   3   2
             5   4   3   2   1
           5   4   3   2   1
             5   4   3   2
               5   4   3
                 5   4
                   5
ans */
#include<stdio.h>
int main()
{
	int i,j,sp=10;
	for(i=5;i>=1;i--)
		{
		for(j=1;j<=sp;j++)
		printf("  ");
		for(j=5;j>=i;j--)
			{
			printf(" %d  ",j);
			}
			sp--;
			printf("\n");
		}	
		for(i=1;i<=5;i++)
		{
		for(j=1;j<=sp;j++)
		printf("  ");
		for(j=5;j>=i;j--)
			{
			printf(" %d  ",j);
			}
			sp++;
			printf("\n");
		}	

}