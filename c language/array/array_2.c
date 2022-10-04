/*
Enter a[0] :1
         Enter b[0] :2
  Enter a[1] :3
         Enter b[1] :4
  Enter a[2] :5
         Enter b[2] :6
  Enter a[3] :7
         Enter b[3] :8
  Enter a[4] :9
         Enter b[4] :10
        a       b       total
        1       2        3
        3       4        7
        5       6        11
        7       8        15
        9       10       19
*/
#include<stdio.h>
int main()
{
	int a[5],b[5];
	int i,total;
	for(i=0;i<5;i++)
	{
		printf("  Enter a[%d] :",i);
		scanf("%d",&a[i]);
		printf(" \t Enter b[%d] :",i);
		scanf("\t%d",&b[i]);

	}
	
	
	printf("\ta\tb\ttotal");
	for(i=0;i<5;i++)
	{
		total=a[i]+b[i];
		printf(" \n\t%d",a[i]);
		printf(" \t%d",b[i]);
		printf("\t %d", total);
	}
	

}