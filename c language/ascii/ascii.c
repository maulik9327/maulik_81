#include<stdio.h>
#include<conio.h>
int main()
{

	char a;
	printf(" \n char :");
	scanf("%c",&a);
	if(a>=65 && a<=90)
	{
		a=a+32;
		printf("\n char :%c",a);

	}
	else if(a>=97 && a<122)
	{
		a=a-32;
		printf("\n char :%c",a);
	}
	return 0;
}