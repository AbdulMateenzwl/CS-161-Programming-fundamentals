#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int size=0;
    cout<<"Enter";
    cin>>size;
    int arr[size];
    for(int x=0;x<size;x++)
    {
        char g;
        cout<<"Enter"<<endl;
        cin>>arr[x];
        cout<<"Enter g exut";
        cin>>g;
        // if(g=='g')
        // {
        //     break;
        // }
        if(size==x+1)
        {
            size=size+1;
        }
    }
    for(int x=0;x<size;x++)
    {
        cout<<arr[x]<<endl;
    }
    // cout<<"Enter ";
    // cin>>size;
    // for(int x=0;x<size;x++)
    // {
    //     cout<<"Enter"<<endl;
    //     cin>>arr[x];
    // }
    // for(int x=0;x<size;x++)
    // {
    //     cout<<arr[x]<<endl;
    // }
}