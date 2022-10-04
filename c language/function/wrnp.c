//WRNP
#include<stdio.h>
int dosum()
{
	int a,b;
	printf("\n Enter two values :");
	scanf("%d  %d",&a,&b);
	return(a+b);
}
int main()
{
	int sum;
	sum=dosum();
	printf("\n Sum : %d",sum);
}