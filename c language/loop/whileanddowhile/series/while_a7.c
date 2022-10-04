#include<stdio.h>
int main()
{
	float a=0.5,n,i;
	printf("\n enter n :");
	scanf("%f",&n);
	for(i=0.5;i<=n;i++)
	{
		printf("\n%.1f",a);
		a=a+i;
	}
	return 0;
}