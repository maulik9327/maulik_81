#include<stdio.h>
int main()
{
	int  i,n;
	printf(" Enter the value of N :");
	scanf("%d",&n);
	//for(i=-n;i<=n;++i)
	i=-n;
	do
	{
	printf("\n %d  hello",++i);
	}while(i<=n);
	
}
