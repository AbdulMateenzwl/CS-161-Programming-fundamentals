#include<iostream>
using namespace std;
struct laptop
{
    string man;
    string model;
    float processror;
    int ram;
    int hard;
    int generation;
    double price;
};
laptop we;
void add_to_struct(string manf,string model,float pro,int ram,int hard,double price)
{
    we.man = manf;
    we.model=model;
    we.processror=pro;
    we.ram=ram;
    we.hard=hard;
    we.price=price;
}
void input()
{
    string man,model;
    float pro;
    int ram,hard;
    double price;
    cout<<"Enter manufacturer :";
    cin>> man;
    cout<<"Enter model";
    cin>> model;
    cout<<"Enter processor :";
    cin>> pro;
    cout<<"Enter ram";
    cin>> ram;
    cout<<"Enter hard";
    cin>> hard;
    cout<<"Enter price";
    cin>> price;
    add_to_struct(man,model,pro,ram,hard,price);
}
void display()
{
    cout<<we.man<<endl;
    cout<<we.model<<endl;
    cout<<we.processror<<endl;
    cout<<we.ram<<endl;
    cout<<we.hard<<endl;
    cout<<we.price<<endl;
}
main()
{
    input();
    display();
}