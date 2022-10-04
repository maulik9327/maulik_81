/* quation.aa8
                                                                                                                                                                                                  a
                                                                                                                                                                                               b    c
                                                                                                                                                                                            d    e    f
                                                                                                                                                                                         g    h    i    j
                                                                                                                                                                                      k    l    m    n    o
                                                                                                                                                                                   p    o    n    m    l
                                                                                                                                                                                      k    j    i    h
                                                                                                                                                                                         g    f    e
                                                                                                                                                                                            d    c
                                                                                                                                                                                               b
ans */

#include<stdio.h>
int main()
{
	char i,j,sp,n=97;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=sp;j++)
		printf("   ");
	for(j=1;j<=i;j++)
	{	
	printf("  %c  ",n);
	n++;
	}
	sp--;
	printf("\n");
	}
              for(i=5;i>=1;i--)
	{
	for(j=1;j<=sp;j++)
		printf("   ");
	for(j=1;j<=i;j++)
	{	
	printf("  %c  ",n);
	n--;
	}
	sp++;
	printf("\n");
	}
	

	
}