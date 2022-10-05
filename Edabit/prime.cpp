#include<iostream>
using namespace std;
bool fd(int x)
{
    bool count=1;
    for (int m = 2; m < x; m++)
    {
        if (x % m == 0)
        {
            count = 0;
        }
    }
    return count;
}
main()
{
    cout<<"Enter number:";
    int num;
    bool tr=1;
    int point=0;
    cin>>num;
    bool count=0;
    int array[100]={0};
    
    for(int x=1;x<num;x++)
    {
        count=fd(x);
        if(count)
        {
            array[point]=x;
            point++;
        }
    }
    // for(int x=0;x<point;x++)
    // {
    //     cout<<array[x]<<"       ";
    // }
    for(int x=0;x<point;x++)
    {
        for(int m=x;m<point;m++)
        {
            if(array[x] + array[m]  ==  num)
            {
                cout<<array[x]<<" + "<<array[m]<<"   =    "<<num<<endl;
            }
        }
    }
}