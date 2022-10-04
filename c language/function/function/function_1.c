#include<stdio.h>
int rollno,m1,m2,m3;
int maulik(int rollno, int m1, int m2, int m3)
{
	int total;
	float per;
	char grade;
	printf("\n,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,");
	printf("\n\n Rollno\t Total \t Per \t Grade");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	total=m1+m2+m3;
	per=total/3;
	if(per>90)
	{
	grade='A';
	}
	else if(per>75)
	{
	grade='B';
	}
	else if(per>60)
	{
	grade='C';
	}
	else if(per>50)
	{
	grade='D';
	}
	else if(per>35)
	{
	grade='E';
	}
	else if(per<=35)
	{
	grade='F';
	}
	
	printf("\n %d \t %d \t %.2f \t %c",rollno,total,per,grade);
	printf("\n,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,");
}
void getdata()
{
	int rollno,m1,m2,m3;
	/*printf("\n %d",rollno[i]);
	printf("\t %d",m1);
	printf("\t %d",m2);
	printf("\t %d",m3);
	total[i]=m1+m2[i]+m3[i];
	printf("\t %d",total[i]);
	per[i]=total[i]/3;
	printf("\t %.2f",per[i]);*/
	printf(" Enter Rollno :");
	scanf("%d",&rollno);
	printf(" Enter maths :");
	scanf("%d",&m1);
	printf(" Enter scince :");
	scanf("%d",&m2);
	printf(" Enter English :");
	scanf("%d",&m3);
	maulik(rollno,m1,m2,m3);
}
int main()
{
	getdata();
}