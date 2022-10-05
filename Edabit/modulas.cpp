#include<iostream>
using namespace std;
main()
{
    int num=0,dev=0;
    cout<<"Enter the Number";
    cin>>num;
    cout<<"Enter the devider";
    cin>>dev;
    int rem=0;
    int half=dev/2;
    rem=num%dev;
    int rem2=dev-rem;
    if(rem > half)
    {
        num=num+rem2;
    }
    else
    {
        num=num-rem2;
    }
    cout<<num;
}