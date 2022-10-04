#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str1[10],str2[10];
	//printf("Enter String : ");
	//gets(str);
	//int len = strlen(str);
	//printf("\n Len : %d",strlen(str));
			//strlen(str);
	//strrev(str);
	//printf("\n Reverse : %s",str);
	printf("Enter String 1 : ");
	gets(str1);
	//strcpy(str2,str1);
	//printf("\n str2 :%s ",str2);
	printf(" \n Enter string 2 :");
	gets(str2);
	//strcat(str2,str1);
	//printf("\n str2 : %s",str2);
	//strcmp(str1,str2);
	//printf("\n Compare : %d",strcmp(str1,str2));
	strcmpi(str1,str2);
	printf("\n Compare i : %d",strcmpi(str1,str2));

}