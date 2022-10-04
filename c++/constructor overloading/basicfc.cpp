#include<iostream>
using namespace std;
class Sum
{
    public:
    Sum(int,int);
    Sum(int,int,int);
    Sum(double,double);
    Sum(double,double,double);
};
Sum::Sum(int a,int b)
{
    cout<<"two para int a+b:"<<a+b<<endl;
}
Sum::Sum(int a,int b,int c)
{
    cout<<"three fara int a+b+c:"<<a+b+c<<endl;
}
Sum::Sum(double a,double b)
{
    cout<<"tow par double a+b:"<<a+b<<endl;
}
Sum::Sum(double a,double b,double c)
{
    cout<<"three para double a+b+c:"<<a+b+c<<endl;
}
int main()
{
    Sum ob1(10.1,20.1,30.0);//double point value
    //Sum ob1(10,20,30);//int value
}