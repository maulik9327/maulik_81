#include<iostream>
using namespace std;
int main()
{
	int i1=1,sp=10;
	
	while(i1<=5)
		{
		int j=1;
		
		while(j<=sp)
			{
			cout<<"  ";
			j++;
			}
	
 		 j=1;
		while(j<=i1)
			{
			cout<<"   "<<j;
			j++;
			}
			i1++;
			sp--;
			cout<<"\n";
		}

	int i2=5;
	while(i2>=1)
	{
	
		int j=1;
		while(j<=sp)
			{
			cout<<"  ";
			j++;
			}
	
		 j=1;	
		while(j<=i2)
			{
			cout<<"   "<<j;
			j++;	
			}	
			i2--;
			sp++;
			cout<<"\n";
	}

}