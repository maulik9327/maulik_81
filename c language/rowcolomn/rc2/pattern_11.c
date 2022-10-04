   /* quation.11

       1
        0       0
        1       1       1
        0       0       0       0
        1       1       1       1       1
ans */
#include<stdio.h>
int main()
{
	int i,j,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(i%2==1)
		{
		printf("\t1");
		a++;
		}
		else
		{
		printf("\t0");
		a++;
		}
		}
		printf("\n");
	}
	printf("\n");
}