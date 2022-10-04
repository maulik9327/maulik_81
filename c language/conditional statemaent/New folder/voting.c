#include<stdio.h>
int main()
{
	int a;
	printf(" Enter the age person :");
	scanf("%d",&a);
	if(a>=18)
	{
		printf(" Eligible for voting ");
	}
	else
	{
		printf(" Not Eligible voting ");
	}
}