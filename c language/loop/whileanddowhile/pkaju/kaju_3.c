#include<stdio.h>
int main()
{
	int i,j,sp=10;
	//for(i=5;i>=1;i--)
		int i1=5;
		while(i1>=1)
		{
		//for(j=1;j<=sp;j++)
			int  j=1;
			while(j<=sp)
			{
			printf("  ");
			j++;
			}
		//for(j=i;j<=5;j++)
			j=i1;
			while(j<=5)
			{
			printf("  %d ",i1);
			j++;
			}
 			i1--;
			sp--;
			printf("\n");
		}
		//for(i=1;i<=5;i++)
                            int i2=1;
		while(i2<=5)
		{
		//for(j=1;j<=sp;j++)
			int j=1;
			while(j<=sp)
			{
			printf("  ");
			j++;
			}
		//for(j=i;j<=5;j++)
			j=i2;
			while(j<=5)
			{
			printf("  %d ",i2);
			j++;
			}
 			i2++;
			sp++;
			printf("\n");
		}

}
