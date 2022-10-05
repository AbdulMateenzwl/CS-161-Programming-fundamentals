#include<iostream>
using namespace std;
main()
{
    int length;
    int total=0;
    cout<<"Enter length";
    cin >> length;
    for(int x=length; x>=1; x=x-2)
    {
        int factorial = 1;
        for (int m = x; m > 1; m--)
        {
            factorial = factorial * m;
        }
        total = total + factorial;
    }
    cout<<total;
}