#include<iostream>
using namespace std;
main()
{
    string find;
    string sol;
    int count=0;
    cout<<"Enter the string ";
    getline(cin,find);
    cout<<"Enter the solution";
    cin>>sol;
    for(int x=0;x < find.length();x++)
    {
        if(find[x] == '*')
        {
            find[x]=sol[count];
            count++;
        }
    }
    cout<<find;
}