#include<stdio.h>
int main()
{
	int a=100,b=127;
	printf("\na %d - %d ",a,a<<1);   // left swift
	printf("\nb %d - %d ",b,b<<1);

	printf("\na %d - %d ",a,a<<2);   // left swift
	printf("\nb %d - %d ",b,b<<2);

	printf("\na %d - %d ",a,a>>1);   // right swift
	printf("\nb %d - %d ",b,b>>1);

	printf("\na %d - %d ",a,a>>2);   // right swift
	printf("\nb %d - %d ",b,b>>2);

}