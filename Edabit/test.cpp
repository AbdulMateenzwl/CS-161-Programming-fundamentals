#include <iostream>
using namespace std;
bool check(string pass)
{
    bool count = 0;
    for (int x = 0; x < pass.length() ; x++)
    {
        if (pass[x] == '@')
        {
            count = 1;
        }
    }
    return count;
}
main()
{
    int d = 0;
    while (1)
    {
        system("cls");
        cout << "Enter password ";
        string pass;
        cin >> pass;
        if(check(pass))
        {
            cout<<"Your pass is strong"<<endl;
            cin>>d;
            break;
        }
        cout<<"Pass is weak"<<endl;
        cin>>d;
    }
}