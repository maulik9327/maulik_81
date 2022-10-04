#include<iostream>
using namespace std;
class product
{
    int qty;
    float price,amount,disless,disamount,bill,gst,netbill;
    public:
    void setVal()
    {
        cout<<"Enter Qty :";
        cin>>qty;
        cout<<"\n Enter Price : ";
        cin>>price;
    }
    void getVal()
    {
         cout<< "\nQty\tRate\tAmount\tdisamount\tDisless\tGst\tNetbill "<<endl;
         cout<<"``````````````````````````````````````````````````````````````````";
    }
    void dosum()
    {
        amount=qty*price;
		disamount=(amount*5)/100;
		disless=amount-disamount;
		gst=(disless*18)/100;
		netbill=disless+gst;
       
		cout<<"\n"<<qty<<"\t"<<price<<"\t"<<amount<<"\t"<<disamount<<"\t\t"<<disless<<"\t"<<gst<<"\t"<<netbill<<endl;
        cout<<"``````````````````````````````````````````````````````````````````";
    }
};
int main()
{
    product obj1;
    obj1.setVal();
    obj1.getVal();
    obj1.dosum();
}