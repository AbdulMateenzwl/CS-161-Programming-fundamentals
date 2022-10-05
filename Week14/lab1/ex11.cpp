#include<iostream>
using namespace std;
float sum(int arr[])
{
    int sum=0;
    for(int i=0;i< 5;i++)
    {
        sum+=arr[i];
    }
    int avg=sum/5;
    return avg;
}
int main()
{
    int array[5]={4,8,2,4,2};
    int sum1=sum(array);
    cout<<sum1;
    return 0;
}