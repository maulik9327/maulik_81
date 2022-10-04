/* quation.8
        A       B       C       D       E
        F       G       H       I       J
        K       L       M       N       O
        P       Q       R       S       T
        U       V       W       X       Y
ans */
#include<stdio.h>
int main()
{
	char i,j,n=65;
	for(i=1;i<=5;i++)	
	{			
		for(j=1;j<=5;j++)
		{
		printf("\t%c",n);
		n++;
		}	
		printf("\n");
	}
}