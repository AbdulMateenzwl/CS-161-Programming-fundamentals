#include <iostream>
using namespace std;
main()
{
    int we[5]={3,5,1,9,6};
    for(int x=0;x<5;x++)
    {
        for(int m=x;m<5;m++)
        {
            if(we[x] > we[m])
            {
                swap(we[x],we[m]);
            }
        }
    }
    for(int x=0;x<5;x++)
    {
        cout<<we[x]<<"      ";
    }
}