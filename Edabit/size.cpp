#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the size of array :";
    cin >> size;
    int array[size];
    for (int x=0;x<size;x++)
    {
        cout<<"Enter Input : ";
        cin>>array[x];
    }
    cout<<"Display > "<<endl;
    for(int x=0;x<size;x++)
    {
        cout<<array[x]<<"\t";
    }
    cout<<endl;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"Enter the size of array :";
    cin >> size;
    for (int x=0;x<size;x++)
    {
        cout<<"Enter Input : ";
        cin>>array[x];
    }
    cout<<"Display > "<<endl;
    for(int x=0;x<size;x++)
    {
        cout<<array[x]<<"\t";
    }
}