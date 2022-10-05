#include<iostream>
using namespace std;
main()
{
    int num;
    int num1=1,sum=0;
    cout<<"Enter the tetra hedron number";
    cin>>num;
    for(int x=0;x<num;x++)
    {  
        sum=sum+num1;
        num1=num1+x+2;
    }
    cout<<sum;
}