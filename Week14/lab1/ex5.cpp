#include<iostream>
using namespace std;
main()
{
    int *pc;
    int x=9;
    pc=&x;
    cout<<"PC= "<<*pc<<endl;
    int r=3;
    pc=&r;
    cout<<"PC= "<<*pc;
}