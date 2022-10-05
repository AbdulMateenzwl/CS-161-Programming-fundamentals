#include <iostream>
using namespace std;
main()
{
    cout<<"Enter char :";
    char ch;
    cin >> ch;
    int yt(ch);
    if(yt >= 97 && yt <= 122)cout<<"Lower case";
    else if(yt >= 65 && yt <= 90 )cout<<"Upper case";
    else cout<<"Wrong Input";
}