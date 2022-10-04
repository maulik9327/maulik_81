/*
Enter H :20
Enter B :20

areaoftriangle : 200
*/
#include<stdio.h>
int main()
{
	int h,b,areaoftriangle;
	printf( "Enter H :");
	scanf("%d",&h);
	printf( "Enter B :");
	scanf("%d",&b);
	areaoftriangle=.5*h*b;
	printf("\nareaoftriangle : %d",areaoftriangle);
}