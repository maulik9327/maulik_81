#include<stdio.h>
int main()
{
	float units,amount,ta,surcharge,fc=50,a1=60,a2=160;
	printf(" Enter units :");
	scanf("%f",&units);
	if(units<=100)
	{
	amount=units*.6+50;
	printf("\n total amount : %f",amount);
	}
	else if(units<=300)
	{
	amount=(units-100)*.8+fc+a1;
	printf("\n total amount : %f",amount);
	}
	if(units<=300)
	{
	amount=(units-300)*.9+fc+a1+a2;
	printf("\n total amount : %f",amount);
	}
	if(units>300)
	{
	surcharge=amount*1.15;
	printf("\n after add surcharge  : %f",surcharge);
	}
}