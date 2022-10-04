/*
Enter string1 :maulik

String Lenghth is : 6
 Revers string : kiluam 
*/
#include<stdio.h>
int main()
{
	int i,j,z;
	char str1[10],str2[10];
	printf("Enter string1 :");
	gets(str1);  
	for(i=0;str1[i]!='\0';i++);
	printf("String Lenghth is : %d",i);
	z=i-1;
	for(j=0;j<=i;j++)
	{
	str2[j]=str1[z];
	z--;
	}
	printf("\n Revers string : %s",str2);
}