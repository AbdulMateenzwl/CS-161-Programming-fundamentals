#include<iostream>
#include<time.h>
using namespace std;
main()
{
    int size;
    int psum=0,nsum=0,zerocount=0;
    cout<<"Enter size:";
    cin>> size;
    int array[size];
    for(int x=0;x<size;x++)
    {
        cout<<"Enter value "<<x+1<<" : ";
        cin>>array[x];
        if(array[x] > 0)
        {
            psum=psum+array[x];
        }
        if(array[x] < 0)
        {
            nsum=nsum+array[x];
        }
        if(array[x] == 0)
        {
            zerocount++;
        }
    }
    cout<<"SUM : "<<psum+nsum<<endl;
    cout<<"zero count : "<<zerocount;
}