#include<stdio.h>
int main()
{
	int i;
	char str[10];
	printf("Enter string :");
	gets(str);  
	for(i=0;str[i]!='\0';i++);
	
	printf("String Lenghth is : %d",i);
}