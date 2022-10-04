#include<stdio.h>
int main()
{
	int i,j,length;
	char str1[15],str2[15];
	printf("Enter string1 :");
	gets(str1);  
	for(i=0;str1[i]!='\0';i++);
	printf("\n str Lenghth is : %d\n",i);
	for(j=0;j<i;j++)
	{
	str2[j]=str1[j];
	printf("\t%c",str2[j]);
	}
	str2[j]='\0';
	printf("\n str2 =%s",str2);
	return 0;
}