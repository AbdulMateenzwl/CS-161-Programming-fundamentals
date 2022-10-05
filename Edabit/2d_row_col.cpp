#include <iostream>
using namespace std;
bool check(int array[3][3])
{
    bool check = 1;
    for (int t = 0; t < 3; t++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (array[t][x] != array[x][t])
            {
                check = 0;
            }
        }
        if(check==1)
        {
            break;
        }
    }
    return check;
}
main()
{
    int array[3][3] = {
        {1, 0, 1},
        {0, 0, 1},
        {1, 0, 1}};
    cout << check(array);
}