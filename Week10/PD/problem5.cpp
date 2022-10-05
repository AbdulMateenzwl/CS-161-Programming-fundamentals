#include <iostream>
using namespace std;
main()
{
    int length;
    int count = 0;
    cout << "Enter the length of Array : ";
    cin >> length;
    int array[length];
    for (int x = 0; x < length; x++)
    {
        cout << "Enter the elements : ";
        cin >> array[x];
    }
    for (int x = 0; x < length; x++)
    {
        int dump = 0;
        for (int t = 0; t < length; t++)
        {
            if (array[x] < array[t])
            {
                dump = array[x];
                array[x] = array[t];
                array[t] = dump;
            }
        }
    }
    bool ans = true;
    int t = array[length - 1];
    int m = array[0];
    if (t == (m + length - 1))
    {
        ans = true;
    }
    else
    {
        ans = false;
    }
    cout << ans << endl;
}