#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter A :");
	scanf("%d",&a);
	printf("\n Enter B :");
	scanf("%d",&b);
	if(a<b)
	{
		printf("\n a(%d) is smallest....",a);
	}
	else
	{
		printf("\n a(%d) is not smallest....",a);
	}
}
/*
output
Enter A :10

 Enter B :20

 a(10) is smallest....

 Enter A :10

 Enter B :5

 a(10) is not smallest....
*/