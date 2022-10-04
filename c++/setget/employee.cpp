#include<iostream>
using namespace std;
class Employee
{
    int hours,x,days=22,salary;
    string employee;
    public:
    void infoEmployee()
    {
        cout<<"Employee Name :";
        cin>>employee;
        cout<<"\n Employee Salary :";
        cin>>x;
        cout<<"\n Employee Working Hours :";
        cin>>hours;
    }
    void showInfo()
    {
        cout<<"\n\n\n\n*******************************";
        cout<<"\nEmployee Name :"<<employee;
    }
    void showSum()
    {
        
        if(hours>8)
        {
            salary=x*hours*days;
            cout<<"\nSalary        :"<<salary;
            salary=x*hours*days*2;
            cout<<"\nSalary+Bounus :"<<salary;
        }
        else
        {
            salary=x*hours*days;
            cout<<"\nSalary        :"<<salary;
        }
        cout<<"\n*******************************";

    }
};
int main()
{
    Employee obj1;
    obj1.infoEmployee();
    obj1.showInfo();
    obj1.showSum();
}