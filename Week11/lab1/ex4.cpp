#include<fstream>
#include<iostream>
using namespace std;
main()
{
    float tr;
    fstream newfile;
    newfile.open("float.txt", ios ::out);
    cout << "Enter any number(float) : ";
    cin >> tr;
    newfile << tr;
    newfile.close();
}
