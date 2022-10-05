#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int range=0;
    int count=1;
    float average=0.0,sum=0.0;
    cout<<"Enter the range";
    cin>> range;
    int st[range];
    float mark[range];
    string name[range];
    for(int x =0 ; x < range ; x++)
    {
        cout<<"Enter the name of student "<<endl;
        cin >> name[x];
        cout<<"Enter the marks of student "<<count<<endl;
        cin >> mark[x];
        count =count + 1;
    }
    for(int x=0 ; x < range ; x++)
    {
        sum=sum + mark[x];
        average = sum/range;
    }
    cout<<average;
}