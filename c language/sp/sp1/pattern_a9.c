/* quation.9
            A
          B   C
        D   E   F
      G   H   I   J
    K   L   M   N   O
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
}