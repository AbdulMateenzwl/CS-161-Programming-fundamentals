#include<iostream>
#include <string>
using namespace std;
main()
{
    string str;
    string ans;
    cout<<"Enter : ";
    getline(cin,str);
    int length=str.length();
    int index=0;
    for(int x = length-1; x >= 0 ; x--)
    {
        cout<<str[x];
    }
}