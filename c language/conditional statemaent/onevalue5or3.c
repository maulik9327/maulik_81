// Enter one value find its devisible by 5 or 3 or not

#include<stdio.h>
void main()
{
	int a;
	printf(" \n Enter the value A :");
	scanf("%d",&a);
	if(a%15==0)
	{
		printf("\n value is devisible by 3 or 5 : %d",a);
	}
	else
	{
		printf("\n value is not devisible by 3 or 5 : %d",a);
	}
}


