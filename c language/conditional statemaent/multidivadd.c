// Enter two value and find its multiplication is devisible by addition or not

#include<stdio.h>
void main()
{
	int a,b,addi,multi;
	printf(" \n Enter the value A :");
	scanf("%d",&a);
	printf(" \n Enter the value B :");
	scanf("%d",&b);
	addi=a+b;
	printf("\n addi : %d",addi);
	multi=a*b;
	printf("\n multi = %d",multi);
	if(multi%addi==0)
	{
		printf("\n multiply is devisible by addi ");
	}
	else
	{
		printf("\n multiply is not devisible by addi ");
	}
}

/*
Enter the value A :2

 Enter the value B :2

 addi : 4
 multi = 4
 multiply is devisible by addi


 Enter the value A :12

 Enter the value B :3

 addi : 15
 multi = 36
 multiply is not devisible by addi
*/
