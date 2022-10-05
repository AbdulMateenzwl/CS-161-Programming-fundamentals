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
    bool n=0;
    for(long int x=1299999999;x>0;x--)
    {
        n=fd(x);
        if(n==1)
        {
            cout<<x<<"  "<<endl;
            cin>>n;
            break;
        }
    }
}