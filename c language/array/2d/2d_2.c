/*
 Matrix is

        1       2       3			
        4       5       6
        7       8       9

Diagonal Total :15(1+5+9)
Upper Tringle :11(2+3+6)
Lower tringle :19(4+7+9)
*/
#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" Enter a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Matrix is \n \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\t%d",a[i][j]);
		}
		printf("\n");
	}	
	printf("\nDiagonal Total :");
	printf("%d",a[0][0]+a[1][1]+a[2][2]);
	
	printf("\nUpper Tringle :");
	printf("%d",a[0][1]+a[0][2]+a[1][2]);

	printf("\nLower tringle :");
	printf("%d",a[1][0]+a[2][0]+a[2][1]);
}