/* 
 Enter a[0][0]: 1
 Enter a[0][1]: 2
 Enter a[0][2]: 3
 Enter a[1][0]: 4
 Enter a[1][1]: 5
 Enter a[1][2]: 6
 Enter a[2][0]: 7
 Enter a[2][1]: 8
 Enter a[2][2]: 9
 Enter b[0][0]: 11
 Enter b[0][1]: 12
 Enter b[0][2]: 13
 Enter b[1][0]: 14
 Enter b[1][1]: 15
 Enter b[1][2]: 16
 Enter b[2][0]: 17
 Enter b[2][1]: 18
 Enter b[2][2]: 19

 Matrix is

        1       2       3               11      12      13              12      14      16
        4       5       6               14      15      16              18      20      22
        7       8       9               17      18      19              24      26      28
*/
#include<stdio.h>
int main()
{
	int a[5][5],b[5][5];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" Enter a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" Enter b[%d][%d]: ",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	printf("\n Matrix is \n \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\t%d",a[i][j]);
		}
		printf("\t");
		for(j=0;j<3;j++)
		{
		printf("\t%d",b[i][j]);
		}
		printf("\t");
		for(j=0;j<3;j++)
		{
		printf("\t");
		printf("%d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}	
}