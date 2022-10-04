#include<iostream>
using namespace std;
class Info
{
    float rollno,total,Eng,Sci,Maths,per;
    char grede;
    string str;
    public:
    void setVal()
    {
        cout<<"Enter Name :";
        cin>>str;
        cout<<" Enter Rollno :";
	    cin>>rollno;
	    cout<<" Enter maths :";
	    cin>>Maths;
	    cout<<" Enter scince :";
	    cin>>Sci;
	    cout<<" Enter English :";
	    cin>>Eng;
    }
    void getVal()
    {
        cout<<"Name\tRollno\tMat\tSci\tEng\ttotal  \tper\tGrede"<<endl;
        cout<<"``````````````````````````````````````````````````````````````````";
        cout<<"\n"<<str;
        cout<<"\t"<<rollno;
	    cout<<"\t"<<Maths;
	    cout<<"\t"<<Sci;
	    cout<<"\t"<<Eng;
    }
    void doSum()
    {
        total=Maths+Sci+Eng;
	    cout<<"\t"<<total;
    	per=total/3;
	    cout<<"\t"<<per;
	if(per>90)
	{
	 	grede='A';
	}
	else if(per>75)
	{
	grede='B';
	}
	else if(per>60)
	{
	grede='C';
	}
	else if(per>50)
	{
	grede='D';
	}
	else if(per>35)
	{
	grede='E';
	}
	else if(per<=35)
	{
	grede='F';
	}
	cout<<"\t"<<grede;
	}
    
};
int main()
{
    Info obj1;
    obj1.setVal();
    obj1.getVal();
    obj1.doSum();
}