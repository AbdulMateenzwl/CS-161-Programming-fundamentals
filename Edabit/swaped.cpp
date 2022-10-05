#include <iostream>
using namespace std;
void swapped(int &p1,int &p2)
{
    int temp;
    temp=p1;
    p1=p2;
    p2=temp;
}
main()
{
    int r=1,s=4;
    int *p;
    int *q;
    p=&r;
    q=&s;
    swapped(r,s);
    cout<<r<<"              "<<s;
}