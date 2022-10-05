#include<iostream>
using namespace std;
bool winner()
{
    bool num;
    int array[100];
    int count=0;
    for(int x=0 ; x<4 ; x++)
    {
        cout<<"Enter any number";
        cin>>array[x];
    }
    for(int y = 0 ; y<4 ; y++)
    {
        if(array[0] == array[y])
        {
            count=count+1;
        }
    }
    {
        if(count==4)
        {
            num=1;
        }
        else if (count != 4)
        {
            num=0;
        }
    }
    return num;
}
main()
{
    cout<<winner();
}