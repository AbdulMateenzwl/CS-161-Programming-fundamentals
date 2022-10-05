#include<iostream>
using namespace std;
main()
{
    int size;
    int count=0;
    cout<<"Enter the size of array";
    cin>>size;
    string array[size]={};
    for(int x=0;x<size;x++)
    {
        cout<<"Enter the String :";
        cin>>array[x];
    }
    for(int x=0;x<size;x++)
    {
        for(int m=x+1;m<size;m++)
        {
            if(array[x]==array[m])
            {
                count++;
                array[m]=m*x+m-x*2*m;
            }
        }
    }
    cout<<count;
}