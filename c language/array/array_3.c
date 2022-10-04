/*
Enter a[i] :1
 Enter a[i] :2
 Enter a[i] :3
 Enter a[i] :4
 Enter a[i] :5
 Enter a[i] :6
 Enter a[i] :7
 Enter a[i] :8
 Enter a[i] :9
 Enter a[i] :10

 odd a[0] : 1
 odd a[2] : 3
 odd a[4] : 5
 odd a[6] : 7
 odd a[8] : 9
 even a[1] : 2
 even a[3] : 4
 even a[5] : 6
 even a[7] : 8
 even a[9] : 10
 position of even : 20
 position of odd : 25
 total of odd 25
 total of even 30
 total : 55
*/
#include<stdio.h>
int main()
{
	int a[10],i,total,n=0,n1=0,n2=0,n3=0;
	for(i=0;i<10;i++)
	{
	printf(" Enter a[i] :",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		{
		printf("\n odd a[%d] : %d",i,a[i]);	
		n+=a[i];
		n2+=i;
		}
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
		printf("\n even a[%d] : %d",i,a[i]);
		n1+=a[i];	
		n3+=i;
		}
	}
		printf("\n position of even : %d \n position of odd : %d  ",n2,n3);
		printf("\n total of odd %d \n total of even %d ",n+=0,n1+=0);
		total=n+n1;
		printf(" \n total : %d",total);
}