/*
 Enter R :10
 Enter Pi :3.14

 areaofcircle=314.00
*/
#include<stdio.h>
int main()
{
	float r,pi,areaofcircle;
	printf(" Enter R :");
	scanf("\n %f",&r);
	printf(" Enter Pi :");
	scanf("\n %f",&pi);
	areaofcircle=pi*r*r;
	printf("\n areaofcircle=%.2f",areaofcircle);

}