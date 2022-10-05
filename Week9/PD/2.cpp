#include <iostream>
using namespace std;
void name()
{
    int exit1 = 0;
    int num;
    while (exit1 != 1)
    {
        cout << " Enter any number : ";
        cin >> num;
        for (int m = num; m > 0; m = m / 10)
        {
            if (m % 10 == 7)
            {
                cout << "/////////////////////BOOM////////////////" << endl;
                exit1 = 1;
                break;
            }
        }
        if (exit1 == 1)
        {
            break;
        }
    }
}
main()
{
    name();
}