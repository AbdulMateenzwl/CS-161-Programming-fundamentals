#include<iostream>
using namespace std;
main()
{
    int size;
    int length;
    cout<<"Enter size";
    cin>>size;
    string array[size];
    for(int x=0;x<size;x++)
    {
        cout<<"Enter the string : ";
        cin.ignore();
        getline(cin,array[x]);
        if(array[x].length() >  length)
        {
            length=array[x].length();
        }
    }
    for(int x=1;x<=length;x++)
    {
        for(int m=0;m<size;m++)
        {
            if(array[m].length() == x)
            {
                cout<<array[m]<<endl;
            }
        }
    }
}