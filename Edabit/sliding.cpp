#include <iostream>
using namespace std;
main()
{
    int arr[6]={0};
    int array[5]={1,2,3,4,5};
    cout<<"Enter size";
    int size;
    cin>> size;
    int sum=0;
    for(int x=0;x<6-size;x++)
    {
        for(int m=x;m<size+x;m++)
        {
            arr[x]=arr[x]+array[m];
        }
    }
    for(int x=0;arr[x] != 0;x++)
    {
        cout<<arr[x]<< "        ";
    }
    cout<<endl;
    for(int x=0;arr[x] != 0;x++)
    {
        if(sum<arr[x])
        {
            sum=arr[x];
        }
    }
    cout<<sum;
}