#include<iostream>
using namespace std;
void sqr(int *p)
{
    *p = *p  *  *p ;
}
int main()
{
    int x=100;
    sqr(&x);
    cout<<x;
    return 0;
}