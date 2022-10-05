#include <iostream>
using namespace std;
void amplify(int num)
{
    int i = 1;
    while (i <= num)
    {
        int x;
        x = i % 4;
        if (x == 0)
        {
            int mul;
            mul = i * 10;
            cout << mul;
        }
        else
        {
            cout << i;
        }
        cout << "\n";
        i++;
    }
}

main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    amplify(num);
}