#include <stdio.h>
#include <math.h>
int maulik(float principle,float rate,float time,float CI)
{
	return(CI);
}
int main()
{
	 float principle, rate, time, CI;
	 printf("Enter principle amount: ");
    	scanf("%f", &principle);
    	printf("Enter time: ");
    	scanf("%f", &time);
    	printf("Enter rate: ");
    	scanf("%f", &rate);
	sCI=principle* (pow((1 + rate / 100), time)); 
	printf(" \n Compound Interest = %.2f",maulik(CI));
}