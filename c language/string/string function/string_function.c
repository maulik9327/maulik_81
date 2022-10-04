 #include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[10];
	printf("Enter String : ");
	gets(str);
	//int len = strlen(str);
	printf("\n Len : %d",strlen(str));
			//strlen(str);
	strrev(str);
	printf("\n Reverse : %s",str);
	//strupr(str);
	//priintf("\n Upper : %s",str);
	//strlwr(str);
	//priintf("\n Lower : %s",str);
	
	

}