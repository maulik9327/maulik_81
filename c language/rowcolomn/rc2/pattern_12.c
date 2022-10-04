/*quation.12
        A
        B       A
        C       B       A
        D       C       B       A
        E       D       C       B       A
ans */
#include<stdio.h>
int main()
{
	char i,j,n=5;
	for(i=0;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
		printf("\t%c",j+65);
		}	
		printf("\n");
	}


}