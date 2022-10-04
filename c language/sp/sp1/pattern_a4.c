
/*                  1
                   2   3
                 4   5   6
               7   8   9   10
             11   12   13   14   15
ans */
#include<stdio.h>
int main()
{
	int i,j,n=1,sp=20;
	for(i=1;i<=5;i++)
		{
		for(j=1;j<=sp;j++);
		printf("    ");
		for(j=1;j<=i;j++)
			{
			printf("  %d ",n);
			n++;
			}
			sp--;
			printf("\n");	
               	}
}