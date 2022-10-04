#include <stdio.h>
#include <math.h>
void maulik(float principle,float rate,float time,float CI)
{
  
    CI = principle* (pow((1 + rate / 100), time));
    printf("Compound Interest = %.2f", CI);

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
	maulik(principle, rate, time, CI);
}