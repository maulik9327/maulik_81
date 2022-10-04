/* Matrix is

        1       2       3
        4       5       6
        7       8       9 */
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
  		
}