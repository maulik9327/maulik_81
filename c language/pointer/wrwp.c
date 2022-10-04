// pointer to array

#include<stdio.h>
int *getarray(int *a)
{	
	int i;
	printf("\nAddress\tvalue\n");
	printf("~~~~~~~~~~~~~~~~~~~");
	for(i=0;i<5;i++)
	{
	printf("\n%u\t%d",&a[i],a[i]);
	//printf("\n%u\t%d",(ptr+i),(*ptr+i));
	}
	return a;
}
int main()
{
	int a[5]={23,43,54,51,76};
	int *n;
	n=getarray(a);
	return 0;
}