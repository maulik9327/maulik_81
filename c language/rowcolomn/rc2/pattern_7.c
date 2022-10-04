/* quation.7
        A
        b       c
        D       E       F
        g       h       i       j
        K       L       M       N       O
ans */
#include<stdio.h>
int main()
{
	int i,j,n=65;
	char ch='a';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(i%2==0)
		printf("\t%c",n+32);
		else	
		printf("\t%c",n);
		n++;
		}
		printf("\n");
	}
	return 0;
}