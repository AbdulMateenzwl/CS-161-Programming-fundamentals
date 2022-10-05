#include<iostream>
#include<time.h>
using namespace std;
int ret()
{
    srand(time(0));
    int result = 1 + (rand() % 5);
    return result;
}
main()
{
    string ans="";
    while(1)
    {
        bool no=0;
        int x=ret();
        string xstr=to_string(x);
        for(int x=0;x<ans.length();x++)
        {
            if(ans[x] == xstr[0])
            {
                no=1;
            }
        }
        if(no==1)
        {
            continue;
        }
        ans=ans+xstr;
        if(ans.length() == 5)
        {
            break;
        }
    }
    cout<<ans;
}