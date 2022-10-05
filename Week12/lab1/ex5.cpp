#include<iostream>
using namespace std;
int colour(string ch)
{
    int yt = -1;
    if(ch == "red")
    {
        yt= 0;
    }
    if(ch == "black")
    {
        yt= 1;
    }
    if(ch == "brown")
    {
        yt= 2;
    }
    if(ch == "blue")
    {
        yt= 3;
    }
    if(ch == "gray")
    {
        yt= 4;
    }
    return yt;
}
main()
{
    int cars[5][5]={
    {10,7,12,10,4},
    {23,19,12,16,14},
    {18,11,15,17,2},
    {7,12,16,0,2},
    {3,5,6,2,1}
    };
    string clr;
    cout<<"Enter colour :";
    cin >> clr;
    int yt=-1;
    yt=colour(clr);
    int sum=0;
    for(int x=0 ; x <5 ; x++)
    {
        sum=sum+cars[x][yt];
    }
    cout<<"Total number of "<<clr<<" cars : "<<sum;
}