#include<stdio.h>
float units;
int calc(float units)
{
	float amount;
	if(units<=100)
		amount=units*.8+50;
	else if(units<=300)
		amount=(units-100)*.8+100;
	else
		amount=(units-300)*.9+270;
	if(amount>300)
		amount=amount*1.15;
	printf("\n Electricity Bill for %.2f \n unit is %.2f rupee ",units,amount);
}
void getdata()
{
	printf("\n Enter Units :");
	scanf("%f",&units);
	calc(units);
}
int main()
{
	getdata();
}