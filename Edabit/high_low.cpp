#include<iostream>
using namespace std;

void input(int array[])
{
    for(int x=0;x<5;x++)
    {
        cout<<"Enter the value : ";
        cin>>array[x];
    }
}
int largest(int array[])
{
    int large=0;
    for(int x=0;x<5;x++)
    {
            if(large < array[x])
            {
                large=array[x];
            }
    }
    return large;
}
int smallest(int array[])
{
    int small=9999;
    for(int x=0;x<5;x++)
    {
            if(small > array[x])
            {
                small=array[x];
            }
    }
    return small;
}
main()
{
    int array[5];
    input(array);
    int large=largest(array);
    int small=smallest(array);
    large=large-small;
    cout<<large;
}