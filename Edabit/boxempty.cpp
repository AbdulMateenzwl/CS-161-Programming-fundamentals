#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size : ";
    cin >> size;
    for(int x =0 ; x < size ; x++)
    {
        cout<<"#"<<" ";
    }
    cout<<endl;
    for(int x=0 ; x < size-2 ; x++)
    {
        cout<<"#";
        for(int m=0 ; m < size-2 ; m++)
        {
            cout<<"  ";
        }
        cout<<" # ";
        cout<<endl;
    }
    for(int x =0 ; x < size ; x++)
    {
        cout<<"#"<<" ";
    }
    cout<<endl;
}