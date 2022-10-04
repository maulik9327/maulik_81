#include <stdio.h>
#include <math.h>
int maulik()
{
 	  float principle, rate, time, CI;
	 printf("Enter principle amount: ");
    	scanf("%f", &principle);

    	printf("Enter time: ");
    	scanf("%f", &time);

    	printf("Enter rate: ");
    	scanf("%f", &rate);
	return( principle* (pow((1 + rate / 100), time)));
  

}
int main()
{
	 float CI;
	  CI = maulik();
 	   printf("\nCompound Interest = %.2f", CI);
}	