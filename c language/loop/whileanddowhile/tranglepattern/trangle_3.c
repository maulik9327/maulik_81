#include<stdio.h>
int main()
{
	int i=5,sp=10;
		while(i>=1)
		{
			int j=1;
			while(j<=sp)
			{
			printf("  ");
			j++;
			}
			j=1;
			while(j<=5)
			{
			printf("  %d ",i);
			j++;
			}
			sp--;
			printf("\n");
			i--;
		}
}


/*#include<stdio.h>
int main()
{
	int i,j,sp=10;
	for(i=5;i>=1;i--)
		{
		for(j=1;j<=sp;j++)
			printf("  ");
		for(j=i;j<=5;j++)
			{
			printf("  %d ",i);
			}
 	
			sp--;
			printf("\n");
		}
}*/
 