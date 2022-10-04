/* quation
             A
          B   C
        D   E   F
      G   H   I   J
 K   L   M   N   O
 P   O   N   M   L
    K   J   I   H
      G   F   E
        D   C
          B
ans */
#include<stdio.h>
int main()
{	
	char  i,j,sp=5,n=65;
	for(i=1;i<=5;i++)
		{
		for(j=1;j<=sp;j++)
			printf("  ");
		for(j=1;j<=i;j++)
			{
			printf("  %c ",n);
			n++;
			}
			sp--;
			printf("\n");
		}	
                            for(i=5;i>=1;i--)
		{
		for(j=1;j<=sp;j++)
			printf("  ");
		for(j=1;j<=i;j++)
			{
			printf("  %c ",n);
			n--;
			}
			sp++;
			printf("\n");
		}	

}