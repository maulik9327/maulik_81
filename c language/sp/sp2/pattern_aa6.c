/* quation.aa6
                   A
               A     B
            A     B     C
         A     B     C     D
      A     B     C     D     E
   A     B     C     D     E
      A     B     C     D
         A     B     C
            A     B
               A
ans */
#include<stdio.h>
int main()
{	
	char i,j,sp=5;
	for(i=65;i<=69;i++)
		{
		for(j=1;j<=sp;j++)
			printf("   ");
		for(j=65;j<=i;j++)
			{
			printf("   %c  ",j);
			}
			sp--;
			printf("\n");
		}	
		for(i=69;i>=65;i--)
		{
		for(j=1;j<=sp;j++)
			printf("   ");
		for(j=65;j<=i;j++)
			{
			printf("   %c  ",j);
			}
			sp++;
			printf("\n");
		}	
}