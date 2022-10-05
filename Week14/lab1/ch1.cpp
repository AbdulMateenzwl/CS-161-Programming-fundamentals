#include<iostream>
using namespace std;
main()
{
    int x;
    cout<<"Enter any number : ";
    cin >> x;
    int *p;
    p=&x;
    cout<<*p;
}