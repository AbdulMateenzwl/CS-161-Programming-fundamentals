#include<iostream>
using namespace std;
main()
{
    int array[10];
    int num;
    for(int y=0 ; y < 10 ; y++)
    {
        cout<<"Enter number : ";
        cin>>array[y];
    }
    for(int yt=9 ; yt > 0 ; yt--)
    {
        cout<<array[yt]"    ";
    }
}