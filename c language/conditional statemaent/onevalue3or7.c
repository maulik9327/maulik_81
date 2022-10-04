// Enter two value and find its multiplicationa is devisible by 3 and 7 or not

#include<stdio.h>
void main()
{
	int a,b,multi;
	printf(" \n Enter the value A :");
	scanf("%d",&a);
	printf(" \n Enter the value B :");
	scanf("%d",&b);
	multi=a*b;
	printf("\n multi = %d",multi);
	if(a%21==0)
	{
		printf("\n value is multiply by devisible  3 or 7 : %d",a);
	}
	else
	{
		printf("\n value is not multiply by devisible  3 or 7 : %d",a);
	}
}

/*
output
 Enter the value A :21
 Enter the value B :2

 multi = 42
 value is multiply by devisible  3 or 7 : 21


 Enter the value A :35

 Enter the value B :2

 multi = 70
 value is not multiply by devisible  3 or 7 : 35

*/