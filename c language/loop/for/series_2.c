#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter N :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		if(i%2==0)
		{
			printf(" \t  %d",i*i);
		}
		else
		{	
			printf(" \t %d",i);
		}
	}
	

}