#include<iostream>
using namespace std;
bool rt()
{
    char word[10];
    int count;
    cout<<"Enter any word : ";
    cin>>word;
    for(int x = 0 ; word[x] != '\0' ; x++)
    {
        count=count+1;
    }
    if(count%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
main()
{
    cout<<rt();

}