#include<iostream>
using namespace std;
main()
{
    char yt[10];
    int count=0;
    cout<<"Enter any word ";
    cin>>yt;
    for(int y =10 ; y>=0 ; y--)
    {
        if(yt[y] == 'a' || yt[y] == 'e' || yt[y] == 'i' || yt[y] == 'o' || yt[y] == 'u' )
        {
            count=count+1;
        }
    }
    cout<<count;
}