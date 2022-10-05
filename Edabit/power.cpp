#include<iostream>
using namespace std;
main()
{
    int length;
    int total=0;
    cout<<"Enter length";
    cin >> length;
    int find;
    cout<<"Power :";
    cin >> find;
    int ans=1;
    for(int x=find; x>0;x--)
    {
        ans=ans*find;
    }
    cout<<ans;
}