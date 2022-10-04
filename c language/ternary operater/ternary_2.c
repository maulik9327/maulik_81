#include<stdio.h>
int main()
{
	int a=50,b=20,c=30,d=10;
	(a<b && b<c&&c<d)?printf("\n c(%d) is greater....",c):((a<b)?printf("\n b(%d) is greater....",b):printf("\n a(%d) is greater....",a):printf("\n d(%d) is greater....",d)));
              return  0;
}
