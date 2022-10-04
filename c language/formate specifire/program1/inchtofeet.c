#include<stdio.h>
int main()
{
	float feet,inch;
	printf("Enter inch :");
	scanf("%f",&inch);
	printf("\n inch =%.2f",inch);
	feet=inch/12;
	printf("\n feet =%.2f",feet);
}