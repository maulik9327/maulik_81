#include<iostream>
using namespace std;
class Bank
{
   
    public:
    void getVal(int);
    void getVal(int,int);
    void getVal(int,int,int);
   
};
void getVal(accBalance)
    {
        cout<<"Account Bal :"<<accBalance;
        cout<<"\nWithdrawal :";
    }
    void getVal(accBalance,withdrawal,z)
    {
        z=accBalance-Withdrawal;
        cout<<"\nAccount Bal :"<<z;
    }
    void getVal(accBalance,deposite,x)
    {
        x=accBalance+deposite;
        cout<<"\nDeposite:"<<x;

    }
int main()
{
    Bank sqaure,rect;
    sqaure.getVal(15000);
    rect.getVal();
}