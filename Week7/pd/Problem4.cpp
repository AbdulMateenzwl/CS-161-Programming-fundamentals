#include <iostream>
using namespace std;
void Percent(int limit)
{
    float c1 = 0, c2 = 0, c3 = 0;
    float p1 = 0, p2 = 0, p3 = 0;
    int i = 1;
    while (i <= limit)
    {
        int n1;
        cout << "Enter number " << i << ": ";
        cin >> n1;
        int mod;
        if (n1 % 2 == 0)
        {
            c1++;
        }
        if (n1 % 3 == 0)
        {
            c2++;
        }
        if (n1 % 4 == 0)
        {
            c3++;
        }
        i++;
    }
    p1 = (c1 / limit) * 100;
    p2 = (c2 / limit) * 100;
    p3 = (c3 / limit) * 100;
    cout << p1 << "\n";
    cout << p2 << "\n";
    cout << p3 << endl;
}

main()
{
    int limit;
    cout << "Enter no. of numbers you want to add: ";
    cin >> limit;
    Percent(limit);
}