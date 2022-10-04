#include<stdio.h>
int main()
{
	char str[1];
	printf("Enter string :");
	//scanf("%s",str);
	//scanf("%[^\n]",str);
	gets(str);  //(gets complsary s)
	//puts(str);
	printf("\n string : %s",str);
}