#include<stdio.h>
int main()
{
	int a=50,b=20,c=30;
	(a<b && b<c)?printf("\n c(%d) is greater....",c):((a<b)?printf("\n b(%d) is greater....",b):printf("\n a(%d) is greater....",a));
              return  0;
}
