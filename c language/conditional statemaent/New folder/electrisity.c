#include<stdio.h>
int main()
{
	int i;
	float units,amount,ta,surcharge,bill;

	printf("\n Enter Units :");
	scanf("%f",&units);
	if(units<=100)
	{
		amount=units*.60+50;
		printf("\n total amount :%f \n",amount);
	}
	 else if(units<=200)
	{
		amount=(units-100)*.80+50+60;
		printf("\n total amount :%f \n",amount);
	}
	 else if(units>300)
	{
		amount=(units-300)*.90+50+60+160;
		printf("\n total amount :%f \n",amount);
	}
	if(amount>300)
	{
		surcharge=amount*1.15;
		printf("\n after add surharge : %.2f \n ",surcharge);
	}
	
}