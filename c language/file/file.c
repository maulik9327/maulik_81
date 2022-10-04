#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("file.text","w+");
	fprintf(fp, "welcome to skill qode for decode your skill \n");
	fputs("you are entering to lern c language now.. \n",fp);
	fclose(fp);
}