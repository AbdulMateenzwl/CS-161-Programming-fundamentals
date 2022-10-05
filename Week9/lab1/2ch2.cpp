#include<iostream>
using namespace std;
main()
{
    char yt[10];
    int count=0;
    char abc[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cout<<"Enter any word ";
    cin>>yt;
    for(int t = 0 ; t <= 10 ; t++)
    {
        for(int r = 0 ; r<=26; r++ )
        {
            if(yt[t]==abc[r])
            {
                cout<<abc[r+1];
                break;
            }
        }
    }
}