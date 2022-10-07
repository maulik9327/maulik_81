#include<iostream>
using namespace std;
class tata 
{
    string color;
    public:
    void own_coor(string clr)
    {
        color=clr;
    }
    void get_color()
    {
        cout<<"your tigo color is "<<color;
    }
    void tata_moter()
    {
        cout<<"\n welcome tata motor ";
    }
};
int main()
{
    tata tigo;
    tigo.tata_moter();
    //tigo.get_color="white";
    tigo.own_coor("red");
    tigo.get_color();
}
