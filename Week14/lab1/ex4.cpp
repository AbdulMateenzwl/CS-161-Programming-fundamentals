#include<iostream>
using namespace std;
main()
{
    int *pc;
    int x=9;
    pc=&x;
    x=7;
    cout<<"PC= "<<*pc;
}