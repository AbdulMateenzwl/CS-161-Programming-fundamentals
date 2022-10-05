#include<iostream>
using namespace std;
string dis(string str)
{
    for(int x=0;str[x]!='\0' ;  x=x+2)
        if(str[x] == 'a' )
            str[x]=str[x];
        else
            str[x]='$';
    return str;
}
main()
{
    string str="save world";
    string ans=dis(str);
    cout<<ans;
}