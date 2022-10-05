#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

main()
{
    string ch;
    getline(cin , ch);
    int size = sizeof(ch[0]);
    cout << size;
}