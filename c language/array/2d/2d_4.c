/*
Enter a[0][0]1
Enter a[0][1]2
Enter a[0][2]3
Enter a[1][0]4
Enter a[1][1]5
Enter a[1][2]6
Enter a[2][0]7
Enter a[2][1]8
Enter a[2][2]9

 your matrix is

        1       2       3
        4       5       6
        7       8       9

 Diogonal Total : 15
 Lower Tringle : 11
 UpperTringle : 19
*/
#include<stdio.h>
int main()
{
	int a[5][5],b[5][5];
	int i,j,x=0,y=0,z=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("\n your matrix is \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\t%d",a[i][j]);
		}
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				x=x+a[i][j];
			}
			else if(j>i)
			{
				y=y+a[i][j];
			}
			else
			{
				z=z+a[i][j];
			}
		}
		printf("\n");
	}
	printf("\n Diogonal Total : %d",x);
	printf("\n Upper Tringle : %d",y);
	printf("\n Lower Tringle : %d",z);
}