//NRWP
#include<stdio.h>
void dosum(int x, int y)
{
	
	printf("\n x : %d  \t y : %d",x,y);
	printf("\n sum : %d",x+y);	
}
int main()
{
	int a,b;
	printf("\n Enter two values :");
	scanf("%d  %d",&a,&b);
	dosum(a,b);
}