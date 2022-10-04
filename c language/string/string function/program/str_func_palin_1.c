#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str1[10],str2[10];
	printf("Enter String 1 : ");
	gets(str1);
	int len = strlen(str1);
	printf("\n Len : %d",strlen(str1));
	
	strcpy(str2,str1);
	printf("\n str2 :%s ",str2);
	strrev(str2);
	printf("\n Reverse : %s",str2);
	//printf(" \n Enter string 2 :");
	//gets(str2);
	strcmp(str1,str2);
	printf("\n Compare : %d",strcmp(str1,str2));
	if(strcmp(str1,str2)==0)
	{
		printf("\n This Palindrom..");
	}
	else
	{
		printf("\n This  Not Palindrom..");
	}
}

/*
output
Enter String 1 : nayan

 Len : 5
 str2 :nayan
 Reverse : nayan
 Compare : 0
 This Palindrom..

Enter String 1 : maulik

 Len : 6
 str2 :maulik
 Reverse : kiluam
 Compare : 1
 This  Not Palindrom..

*/