#include<iostream>
using namespace std;
void change(int *p)
{
    (*p)++;
}
int main()
{
    int x=100;
    int *p;
    p=&x;
    change(p);
    cout<<*p;
    return 0;
}