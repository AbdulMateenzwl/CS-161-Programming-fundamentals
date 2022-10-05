#include <iostream>
using namespace std;
main()
{
    int num;
    cout << " Enter number : ";
    cin >> num;
    int num1 = num;
    int sp = 0;
    for (int x = 0; x < num; x++)
    {
        for (int m = 1; m <= num1; m++)
        {
            cout << m;
        }
        for(int q = 0 ; q < sp ; q++)
        {
            cout<<" ";
        }
        for(int q = sp ; q > 0 ; q--)
        {
            cout<<" ";
        }
        for (int z = num1; z > 0; z--)
        {
            cout << z;
        }
        num1--;
        sp++;
        cout << endl;
    }
}