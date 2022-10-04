/*
 Enter a[0] :1
  Enter a[1] :2
  Enter a[2] :3
  Enter a[3] :4
  Enter a[4] :5

 your array is

 a[0] : 1
 a[1] : 2
 a[2] : 3
 a[3] : 4
 a[4] : 5
*/
#include<stdio.h>
int main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("  Enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	printf("\n your array is \n\n");
	for(i=0;i<5;i++)
	{
		printf(" \n a[%d] : %d",i,a[i]);
	}
}