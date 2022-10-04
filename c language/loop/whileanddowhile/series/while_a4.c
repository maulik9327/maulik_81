#include<stdio.h>
int main()
{
	int j=1,i=1,n;
	printf("\n enter n :");
	scanf("%d",&n);
//	for(i=1;i<=n;i*=2,j++)
	do
	{	
	printf("\t %d",i*j);
	i*=2,j++;
	//j*=i;
	//j++;
	}while(i<=n);
	
}