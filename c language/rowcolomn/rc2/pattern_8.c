/* quation
       a
        b       c
        d       e       f
        g       h       i       j
        k       l       m       n       o
 ans  */
#include<stdio.h>
int main()
{
	char i,j,n=97;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
	{	
	printf("\t%c",n);
	n++;
	}
	printf("\n");
	}
	
}