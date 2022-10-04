#include<stdio.h>
int main()
{
	int a=10,*b;

	printf("\nValue a : %d",a);
	printf("\nAdderss a : %u",&a);
	b=&a;
	printf("\nvalue b/ Address of a:%d",b);
	printf("\naddres b:%u",&b);
	printf("\n value of a using b : %d",*b);
}