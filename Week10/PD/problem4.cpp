#include<iostream>
using namespace std;
main()
{
    int length;
    cout<<"Enter the length of Array";
    cin >> length;
    int array[length];
    int k=0;
    cout <<"Enter the value of K : ";
    cin >> k;
    for(int x =0 ; x < length ; x++)
    {
        cout<<"Enter the elements";
        cin >> array[x];
    }
    bool yt;
    for ( int x = 0 ; x <= k ; x++ )
    {
        for(int d = x ; d < length ; d = d + k )
        {
            if (array[x] == array[d])
            {
                yt =1;
            }
            else
            {
                x=length;
                yt = 0;
                break;
            }
        }
    }
    cout << yt;
}