#include <iostream>
using namespace std;
main()
{
    int array[3][3] = {
        {3, 5, 3},
        {5, 1, 8},
        {3, 5, 9}};
    for (int x = 0; x < 3; x++)
    {
        for (int p = 0; p < x; p++)
        {
            cout << "\t";
        }
        for (int m = x; m < 3; m++)
        {
            cout << array[x][m] << "\t";
        }
        cout << endl;
    }
}