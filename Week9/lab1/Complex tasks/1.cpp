#include<iostream>
using namespace std;
main()
{
    int array[9];
    int count =55;
    for(int p = 0 ; p< 9 ; p++ )
    {
        cout<<"Enter any number";
        cin>>array[p];
        count=count-array[p];
    }
    cout<<"Missing number is "<<count;
    
}