#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10;
		int i1=69;
		while(i1>=1)
		{
			int  j=65;
			while(j<=sp)
			{
			cout<<"  ";
			j++;
			}
			j=i1;
			while(j<=69)
			{
			cout<<"   "<<(char)(i1);
			j++;
			}
 			i1--;
			sp--;
			cout<<"\n";
		}
       int i2=65;
		while(i2<=69)
		{
		int j=65;
			while(j<=sp)
			{
			cout<<"  ";
			j++;
			}
			j=i2;
			while(j<=69)
			{
			cout<<"   "<<(char)(i2);
			j++;
			}
 			i2++;
			sp++;
			cout<<"\n";
		}

}
