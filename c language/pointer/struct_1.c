#include<stdio.h>
struct area
{
	int l;
	int b;
};
int main()
{
	struct area rect1={10,20};
	//struct area rect2;
	printf("\n l :%d\t b :%d",rect1.l,rect1.b);
	printf("\n Area of rect1 :%d",rect1.l*rect1.b);
}