#include<stdio.h>
void maulik()
{
	int i,j,sp=15;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=sp;j++)
		printf("  ");
	for(j=1;j<=i;j++)
	{	
	printf("  * ");				
	}
	sp--;
	printf("\n");
	}
}
int main()
{
	maulik(3);
	maulik(5);
	maulik(7);
}

/*
        		     *
                              *   *
                            *   *   *
                          *   *   *   *
                        *   *   *   *   *
                                *
                              *   *
                            *   *   *
                          *   *   *   *
                        *   *   *   *   *
                                *
                              *   *
                            *   *   *
                          *   *   *   *
                        *   *   *   *   *
*/