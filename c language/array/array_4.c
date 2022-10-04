/*
Rollno  Mat     Sci     Eng     total   per      Grede
 1           99        89      96      284     94.00   A
 2           78        74      86      238     79.00   B
 3           77        67      65      209     69.00   C
 4           66        55      44      165     55.00   D
 5           34        45      39      118     39.00   E
*/
#include<stdio.h>
void main()
{
	int m1[5],m2[5],m3[5];
	int i,total[5],rollno[5];
	float per[5];
	char grede[5];

	for(i=0;i<5;i++)
	{
	printf(" Enter Rollno :");
	scanf("%d",&rollno[i]);
	printf(" Enter maths :");
	scanf("%d",&m1[i]);
	printf(" Enter scince :");
	scanf("%d",&m2[i]);
	printf(" Enter English :");
	scanf("%d",&m3[i]);
	}
	printf("Rollno\tMat\tSci\tEng\ttotal  \tper\tGrede");
	for(i=0;i<5;i++)
	{
	printf("\n %d",rollno[i]);
	printf("\t %d",m1[i]);
	printf("\t %d",m2[i]);
	printf("\t %d",m3[i]);
	total[i]=m1[i]+m2[i]+m3[i];
	printf("\t %d",total[i]);
	per[i]=total[i]/3;
	printf("\t %.2f",per[i]);
	if(per[i]>90)
	{
	 	grede[i]='A';
	}
	else if(per[i]>75)
	{
	grede[i]='B';
	}
	else if(per[i]>60)
	{
	grede[i]='C';
	}
	else if(per[i]>50)
	{
	grede[i]='D';
	}
	else if(per[i]>35)
	{
	grede[i]='E';
	}
	else if(per[i]<=35)
	{
	grede[i]='F';
	}
	printf("\t %c",grede[i]);
	}
}