#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter Celsius :");
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("\n fahrenheit :%.2f",fahrenheit);
}
