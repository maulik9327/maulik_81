/*
r=20>10
Enter M :20
Enter D :10
r: 1

r=10>20
Enter M :20
 Enter D :10
 r: 0
*/
#include<stdio.h>
int main()
{
	int m,d,r;
	printf(" Enter M :");
	scanf("%d",&m);
	printf(" Enter D :");
	scanf("%d",&d);
	r=m>d;
	//r=m<d;
	//r=m<=d;
	//r=m>=d;
	printf("\n r: %d",r);
}