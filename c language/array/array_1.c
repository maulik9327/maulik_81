/*
 Enter a[0] :1
  Enter a[1] :2
  Enter b[0] :3
  Enter b[1] :4

 your array is
 a[0] : 1
 a[1] : 2

 your array is
 b[0] : 3
 b[1] : 4
*/
#include<stdio.h>
int main()
{
	int a[2],b[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("  Enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
		printf("  Enter b[%d] :",i);
		scanf("%d",&b[i]);
	}

	printf("\n your array is \n\n");
	for(i=0;i<2;i++)
	{
		printf(" \n a[%d] : %d",i,a[i]);
	}
	printf("\n your array is \n\n");
	for(i=0;i<2;i++)
	{
		printf(" \n b[%d] : %d",i,b[i]);
	}

}