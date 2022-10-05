#include<iostream>
using namespace std;
main()
{
    float  array[7];
    for(int x=0;x<7;x++)
    {
        cout<<"Enter : ";
        cin>>array[x];
    }
    for(int x=0;x<7;x++)
    {
        int count=0;
        float num=array[x];
        for(int m=0;m<7;m++)
        {
            if(num==array[m])
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<"Unique :     "<<array[x]<<endl;
        }
    }
}