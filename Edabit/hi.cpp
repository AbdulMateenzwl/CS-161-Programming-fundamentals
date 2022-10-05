#include <iostream>
using namespace std;
main()
{
    char ch[5]="c++";
    // cout<<ch;
    for(int x=0;ch[x] != '\0';x++)
    {
        cout<<ch[x]<<"      ";
    }
}