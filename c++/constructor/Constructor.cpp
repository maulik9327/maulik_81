#include<iostream>
using namespace std;
class Bank
{
    int accBalance;
    public:
    Bank()
    {
       accBalance=1000;
       cout<<"\n Default Constructor Called...";
    }
    Bank(int initBal)
    {
       accBalance=initBal;
       cout<<"\n Parameterized Constructer Called...";
    }
    void showAccountBalance()
    {
        cout<<"\n Account Balance :"<<accBalance;
    }
};
int main()
{
    Bank Person1(15000),Person2;
    Person1.showAccountBalance();
    Person2.showAccountBalance();
}