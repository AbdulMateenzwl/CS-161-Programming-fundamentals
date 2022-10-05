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
void add_to_struct(string manf,string model,float pro,int ram,int hard,double price)
{
    laptop.man = manf;
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
main()
{
    
}