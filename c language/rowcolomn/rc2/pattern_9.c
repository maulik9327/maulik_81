/* quation.9
       A
        B       C
        D       E       F
        G       H       I       J
        K       L       M       N       O
ans */
 #include<stdio.h>
int main()
{
	int i,j,n=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("\t%c",n);
		n++;
		}
		printf("\n");
	}
}