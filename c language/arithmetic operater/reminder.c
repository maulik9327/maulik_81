/*
Enter M :50
Enter D :12

 R :2
*/
#include<stdio.h>
int main()
{
	int m,r,d;
	printf("Enter M :");
	scanf("%d",&m);
	printf("Enter D :");
	scanf("%d",&d);
	r=m%d;
	printf("\n R :%d",r); 
}