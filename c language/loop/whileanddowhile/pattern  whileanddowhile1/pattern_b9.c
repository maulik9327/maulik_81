 #include<stdio.h>
int main()
{
	int i=1,n=65;
	//for(i=1;i<=5;i++)
	do
	{
		//for(j=1;j<=i;j++)
		int j=1;
		do
		{
		printf("\t%c",n);
		n++;
		j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=5);
}