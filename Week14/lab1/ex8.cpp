#include<iostream>
using namespace std;
void change(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x=100;
    int y=50;
    change(x,y);
    cout<<"X ="<<x<<endl<<"Y= "<<y;
    return 0;
}