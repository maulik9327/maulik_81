#include<stdio.h>
int main()
{
	int a=10,*p,**p2;
	p=&a;
	p2=&p;
	printf("\nValue of a:%d",a);
	printf("\nAddress of a:%u",&a);
	
	printf("\nValue a using p:%d",*p);
	printf("\nAdderss a using p:%u",p);
	printf("\nAddress of p:%u",&p);

	//p2-->p-->a

	printf("\nValue a using p2:%d",**p2);
	printf("\nAdderss a using p2:%u",*p2);
	printf("\nAddress p using p2:%u",p2);
	printf("\nAddress of p2:%u",&p2);
}