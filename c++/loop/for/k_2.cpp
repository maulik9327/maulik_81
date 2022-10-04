#include<iostream>
using namespace std;
int main()
{
	int i,sp=10;
	int i1=1;
	do
	{
		int j=1;	
		do
		{
		cout<<"  ";
		j++;
		}while(j<=sp);
		j=1;
		do
	              {
		cout<<"   "<<i1;
		j++;
               	}while(j<=i1);
	             i1++;
	sp--;
	cout<<"\n";
	}while(i1<=5);
	int i2=5;
	do
	{
		int j=1;
		do
		{
		cout<<"  ";
		j++;
		}while(j<=sp);
		j=1;
		do
		{
		cout<<"   "<<i2;
		j++;
		}while(j<=i2);
	i2--;
	sp++;
	cout<<"\n";
	}while(i2>=1);
}

