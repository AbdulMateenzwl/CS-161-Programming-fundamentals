#include<iostream>
using namespace std;
main()
{
    string str1;
    string str2;
    cout<<"Enter the String :";
    getline(cin,str1);
    cout<<"Enter the String :";
    getline(cin,str2);
    bool ans1=1;
    int length1=str1.length();
    int length2=str2.length();
    int length=length1-length2;
    for(int x=0;x<length2;x++)
    {
        if(str1[length+x] != str2[x] )
        {
            ans1=0;
            break;
        }
    }
    cout<<ans1<<endl;
    for(int x=0;x<length2;x++)
    {
        cout<<str1[length+x]<<"     "<<str2[x]<<endl;
    }

}