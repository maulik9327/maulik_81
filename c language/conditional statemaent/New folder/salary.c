#include<stdio.h>
void main()
{
	float salary,hra,da,z;
	printf("\n Enter salary :");
	scanf("%f",&salary);
	if(salary<=5000)
		{
			hra=salary*.08;
			da=salary*.2;
			printf("\n har : %f \n da %f",hra,da);
			
		}
		else if(salary>=5000 && salary<=10000)
		{
			hra=salary*.12;
			da=salary*.3;
			printf("\n har : %f \n da %f",hra,da);	
		}else if(salary>=10000 && salary<=15000)
		{
			hra=salary*.15;
			da=salary*.4;
			printf("\n har : %f \n da %f",hra,da);
		}
		z=salary+hra+da;
		printf("\n total salary :%f",z);
}