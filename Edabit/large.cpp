#include <iostream>
using namespace std;
main()
{
    int array[5];
    for (int x = 0; x < 5; x++)
    {
        cout << "Enter ";
        cin >> array[x];
    }
    int large = 0;
    for (int x = 0; x < 5; x++)
    {
        if (array[x] > large)
        {
            large = array[x];
        }
    }
    cout<<large;
}