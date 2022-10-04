#include<stdio.h>
int main()
{
	int a=10,b=20;
	
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	
	printf("\n Before Swapping ");
	printf("\n a=%d b=%d",a,b);
	a=a+b;//(10+20)a=30 
	b=a-b;//(30-20)b=10
	a=a-b;//(30-10) a=20
	printf("\n value b : %d",b);
	printf("\n value a : %d",a);
	printf("\n a+b : %d",a+b);
	printf("\n After Swapping");
	printf("\n a=%d b=%d",a,b);
}