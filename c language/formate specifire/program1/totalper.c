/*

 maths = 90
 physics = 77
 chemistry = 69
 total = 236
 per =78
*/
#include<stdio.h>
int main()
{
	int maths=90,physics=77,chemistry=69,total=300,per;
	
	printf("\n maths = %d",maths);
	printf("\n physics = %d",physics);
	printf("\n chemistry = %d",chemistry);

	total=maths+physics+chemistry;
	printf("\n total = %d",total);
	
	per=total/3;
	printf("\n per =%d",per);
	
}