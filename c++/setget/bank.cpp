#include<iostream>
using namespace std;
class Bank
{
    int z,accBalance,Withdrawal,x,initBal,deposite;
    public:
    Bank()
    {
       cout<<"\n Default Constructor Called...";
    }
    void get()
    {
        cout<<"Account Bal :"<<accBalance;
        cout<<"\nWithdrawal :";
    }
    Bank(int initBal)
    {
       accBalance=initBal;
    }
    void showAccountBalance()
    {
        z=accBalance-Withdrawal;
        cout<<"\nAccount Bal :"<<z;
    }
    void accDeposite()
    {
        x=accBalance+deposite;
        cout<<"\nDeposite:"<<x;

    }
};
int main()
{
    Bank Person1(15000);
    Person1.get();
    Person1.showAccountBalance();
    Person1.accDeposite();
}