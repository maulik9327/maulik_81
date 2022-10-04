#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter N :");
	scanf("%d",&n);
//	for(i=1;i<=n;i++)
	
	do
	{	
		if(i%2==0)
		{
			printf(" \t  %d",i*i);
		}
		else
		{	
			printf(" \t %d",i);
		}
		i++;
	}while(i<=n);
	

}