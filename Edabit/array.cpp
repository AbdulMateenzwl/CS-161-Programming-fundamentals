#include<iostream>
using namespace std;
main()
{
    int size;
    bool tr=1;
    cout<<"Enter size";
    cin>> size;
    int array[size];
    for(int x=0;x<size;x++)
    {
        cout<<"Enter value";
        cin>>array[x];
    }
    for(int x=0;x<size;x++)
    {
        if(x%2 == 0)
        {
            if(array[x] % 2 != 0)
            {
                tr=0;
            }
        }
    }
    cout<<tr;
}