#include<iostream>
using namespace std;
void change(int &x)
{
    cout<<"Value of x in function before addition = "<<x<<endl;
    x=x+100;
    cout<<"Value of x in function after addition = "<<x<<endl;
}
int main()
{
    int x=100;
    cout<<"Value of x before passing to function = "<<x<<endl;
    change(x);
    cout<<"Value of x after passing to function = "<<x<<endl;
    return 0;
}