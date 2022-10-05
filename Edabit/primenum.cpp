#include<iostream>
using namespace std;
int check(int num)
{
    int count=0;
    for(int x =1 ; x < num ; x++)
    {
        if(num%x==0)
        {
            count++;
        }
    }
    if(count == 1) return 1;
    else return 0;
}
main()
{
    int num=0;
    int find;
    cout<<"Enter the num : ";
    cin >> find;
    for(int x = 2 ; x<= find ; x++)
    {
        num=num+check(x);
    }
    cout<<num;
}