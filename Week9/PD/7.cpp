#include <iostream>
using namespace std;
main()
{
    char num[4];
    string moves[9] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock"};
    cout << "Enter amy number";
    cin >> num;
    int mod=0;
    int cnt = 1;
    for(int x =0 ; x< 4 ; x++)
    {
        mod = num[x] + cnt;
        cout<<moves[mod]<<endl;
        cnt++;
    }
    // for (int x = 0; x < 4 ; x++)
    // {
    //  cout<<num[0];
    // }
}