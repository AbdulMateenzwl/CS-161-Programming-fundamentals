#include <iostream>
using namespace std;
void show()
{
    int count = 0;
    char array1[10];
    char array2[10];
    cout << "Enter any word";
    cin >> array1;
    cout << "Enter any word";
    cin >> array2;
    for (int x = 0; array1[x] != '\0'; x++)
    {
        for (int y = 0; array2[y] != '\0'; y++)
        {
            if (array1[x] == array2[y])
            {
                count = count + 1;
                array1[x] = '-';
                array2[y] = '_';
            }
        }
    }
    cout << count;
}
main()
{
    show();
}