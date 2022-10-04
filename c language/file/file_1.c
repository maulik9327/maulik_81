#include<stdio.h>
int main()
{
	FILE *fp;
	char str[255];
	fp=fopen("file_1.text","w+");
	while(fscanf(fp,"%s",str)!=EOF)
	{
	printf("%s",str);
	
	}
	fclose(fp);
}