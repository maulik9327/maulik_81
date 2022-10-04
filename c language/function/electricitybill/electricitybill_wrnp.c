#include<stdio.h>
int maulik()
{
	int i;
	float units,amount,ta,surcharge;

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
		return("\n after add surharge : %.2f \n ",surcharge);
	}
	
}
int main()
{
	float esur;
	esur = maulik();
	printf("\n Total Surcharge : %f \n",esur);
}