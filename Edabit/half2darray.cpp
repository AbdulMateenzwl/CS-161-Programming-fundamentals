#include <iostream>
using namespace std;
main()
{
    int array[5][5] = {
        {3, 5, 3,7,3},
        {5, 1, 8,4,8},
        {3, 5, 9,5,3},
        {3, 5, 3,7,3},
        {5, 1, 8,4,8}
        };
    for (int x = 0; x < 5; x++)
    {
        for (int m = 0; m < x; m++)
        {
            array[x][m] = -9;
        }
    }
    for (int x = 0; x < 5; x++)
    {
        for (int m = 0; m < 5; m++)
        {
            if (array[x][m] == -9)
            {
                cout << "\t";
            }
            else
            {
                cout << array[x][m] << "\t";
            }
        }
        cout << endl;
    }
}