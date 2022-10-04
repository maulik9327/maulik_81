#include<iostream>
using namespace std;
class Bank
{
    string name;
    int accBalance;
    public:
    Bank();
    Bank(int);
    void showAccountBalance();
    void getAccInflo();
    void showBankDetails();
};
void Bank::getAccInflo()
{
    cout<<"your Name pleass :";
    cin>>name;
}
Bank::Bank()
{
    accBalance=1000;
    cout<<"\n Default constructor Called....";
}
Bank::Bank(int initBal)
{
    accBalance=initBal;
    cout<<"\n parameterized constructor called...";
}
void Bank::showAccountBalance()
{
    cout<<"\n Account Balance:"<<accBalance;
}
void Bank::showAccountBalance()
{
    cout<<"\n name: "<<name;
    cout<<"\n Accout Balance :"<<accBalance;
}
int main()
{
    Bank person[3];
    person[1].getAccInflo();
    person[1].showAccountBalance();
    person[1].showAccountBalance();
}