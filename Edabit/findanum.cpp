#include<iostream>
using namespace std;
main()
{
    int length;
    int total=0;
    cout<<"Enter length";
    cin >> length;
    int find;
    cout<<"Find :";
    cin >> find;
    int count=0;
    for(int x=length;x>0;x=x/10)
    {
        if(x%10==find)
        {
            count++;
        }
    }
    cout<<count;
}