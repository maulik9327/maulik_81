/* quation.aa3
	         5
                    4   4
                  3   3   3
                2   2   2   2
              1   1   1   1   1
            1   1   1   1   1
              2   2   2   2
                3   3   3
                  4   4
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
			printf("  %d ",i);
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
			printf("  %d ",i);
			}
 	
			sp++;
			printf("\n");
		}

}
