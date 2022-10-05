#include<iostream>
using namespace std;
void winner()
{
    int num;
    int fnum;
    cout<<"Enter the size of array :";
    cin>>num;
    int array[num];
    for(int x =0 ; x < num ; x++ )
    {
        cout<<"Enter any number :";
        cin>>array[x];
        if(array[x]%2 == 0)
        {
            fnum=array[x]-2;
            cout<<fnum<<endl;
        }
        if(array[x]%2 != 0)
        {
            fnum=array[x]+2;
            cout<<fnum<<endl;
        }
    }
}
main()
{
    winner();
}