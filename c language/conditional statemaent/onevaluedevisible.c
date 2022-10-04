// Enter one value find its devisible by 5 or not

#include<stdio.h>
void main()
{
	int a;
	printf(" \n Enter the value A :");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("\n value is devisible by 5 : %d",a);
	}
	else
	{
		printf("\n value is not devisible by 5 : %d",a);
	}
}

/*
output
 Enter the value A :56

 value is not devisible by 5 : 56

 Enter the value A :45

 value is devisible by 5 : 45
*/