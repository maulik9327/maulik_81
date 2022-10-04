/* quation.aa10
                       5
                    4   5
                  3   4   5
                2   3   4   5
              1   2   3   4   5
            1   2   3   4   5
              2   3   4   5
                3   4   5
                  4   5
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
		for(j=i;j<=5;j++)
		{
			printf("  %d ",j);
		}
		sp--;
		printf("\n");
	}
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
			printf("  ");
		for(j=i;j<=5;j++)
		{
			printf("  %d ",j);
		}
		sp++;
		printf("\n");
	}

}