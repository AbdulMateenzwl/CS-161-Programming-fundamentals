#include<iostream>
using namespace std;
void name()
{
    int num;
    int u =0;
    cout<<"How many elements you want to add";
    cin >> num;
    int yt[num]={0};
    int array[num];
    for(int x = 0 ; x < num ; x++ )
    {
        cout << "Enter element";
        cin >> array[x];
    }
    for(int x =1 ; x < (num - 1) ; x++)
    {
        if(array[x] > array[x-1]  &&  array[x] > array[x+1])
        {
            yt[u]=array[x];
            u=u+1;
        }
    }
    for(int x =0 ; x < (u) ; x++)
    {
        cout<<yt[x]<<endl;
    }
}
main()
{
    name();
}