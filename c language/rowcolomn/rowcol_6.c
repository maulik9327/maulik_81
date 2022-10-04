// quation 
        //1       1       1       1       1
        //3       3       3       3       3
        //5       5       5       5       5
        //7       7       7       7       7
        //9       9       9       9       9

//ans
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=10;i=i+2)
	{
		for(j=1;j<=5;j++)
		{
		printf("\t%d",i);
		}	
		printf("\n",j);
	}


}