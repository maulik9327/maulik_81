//WRWP
#include<stdio.h>
int dosum(int a, int b)
{
	
	return(a+b);
}
int main()
{
	int a,b;
	printf("\n Enter two values :");
	scanf("%d  %d",&a,&b);
	printf("\n Sum : %d", dosum(a,b));
}