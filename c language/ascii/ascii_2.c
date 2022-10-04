#include<stdio.h>
int main()
{
	
	char ch='a';
	
	printf("Enter char :");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
	printf("\nchar is vowel");
	}
	else
	{
	printf("\nchar is consontant");
	}
	return 0;
}