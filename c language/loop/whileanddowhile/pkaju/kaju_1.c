#include<stdio.h>
int main()
{
	int i1=1,sp=10;
	//for(i=1;i<=5;i++)
	while(i1<=5)
		{
		//for(j=1;j<=sp;j++)
		int j=1;
		while(j<=sp)
			{
			printf("  ");
			j++;
			}
		//for(j=1;j<=i;j++)
 		 j=1;
		while(j<=i1)
			{
			printf("  %d ",j);
			j++;
			}
			i1++;
			sp--;
			printf("\n");
		}
	//for(i=5;i>=1;i--)
	int i2=5;
	while(i2>=1)
	{
	//for(j=1;j<=sp;j++)
		int j=1;
		while(j<=sp)
			{
			printf("  ");
			j++;
			}
	//for(j=1;j<=i;j++)
		 j=1;	
		while(j<=i2)
			{
			printf(" %d  ",j);
			j++;	
			}	
			i2--;
			sp++;
			printf("\n");
	}

}