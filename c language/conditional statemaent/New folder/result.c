#include<stdio.h>
int main()
{
	float mark;
	char grade;
	printf(" Enter mark :");
	scanf("%d",&mark);
	if(mark>=75)
	{
		grade='A';
	}
	else if(mark >=60 && mark < 75)
	{
		grade='B';
	}
	else if(mark >=45 && mark < 60)
	{
		grade='C';
	}
	else if(mark >=35 && mark < 45)
	{
		grade='D';
	}
	else
	{
		grade='f';
	}
	printf(" Your grade is : %c",grade);
	scanf("%c",&grade);
}