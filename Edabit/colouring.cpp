#include <iostream>
#include <windows.h>
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

main()
{
    for (int i = 0; i < 50; i++)
    {
        SetConsoleTextAttribute(color, i);
        cout << i<<" I am mateen "<<endl;
    }
}