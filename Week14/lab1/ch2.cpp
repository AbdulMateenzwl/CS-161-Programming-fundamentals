#include<iostream>
using namespace std;
void display(int *p)
{
    cout<<*p;
}
main()
{
    int x;
    cout<<"Enter any number : ";
    cin >> x;
    display(&x);
}