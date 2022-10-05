#include<iostream>
#include<windows.h>
using namespace std;
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
main()
{
    int rt;
    for(int x=0;x<143;x++)
    {
        SetConsoleTextAttribute(color,x);
        cout<<x<<" Hello"<<endl;
    }
    cin>>rt;
}