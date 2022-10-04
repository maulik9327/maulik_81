#include<stdio.h>
int main()
{
	float income,tax;
	printf("\n Enter your salary :");
	scanf("%f",&income);
	
	if(income<=2500)
	{
	tax=income*.0;
	printf("\n your tax is : %f",tax);
	}
	else if(income<=5000)
	{
	tax=(income-2500)*.10;
	printf("\n your tax is : %f",tax);
	}	
	else if(income<=10000)
	{
	tax=(income-5000)*.20+250;
	printf("\n your tax is : %f",tax);
	}
	else if(income>10000)
	{
	tax=(income-10000)*.30+250+1000;
	printf("\n your tax is : %f",tax);
	}
}