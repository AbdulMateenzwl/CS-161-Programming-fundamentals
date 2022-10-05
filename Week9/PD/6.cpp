#include <iostream>
using namespace std;
void name()
{
    int length;
    cout << "Enter the hight";
    cin >> length;
    string colour[length];
    int count = 0;
    for (int x = 0; x < length; x++)
    {
        cout << " Enter any colour ";
        cin >> colour[x];
    }
    for (int x = 1; x < length; x++)
    {
        if (colour[x - 1] != colour[x])
        {
            count = count + 1;
        }
    }
    int time1=0,time2=0;
    time1=length*2;
    time2= time1 + count;
    cout << time2;
}
main()
{
    name();
}