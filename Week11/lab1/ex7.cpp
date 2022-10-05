#include<fstream>
#include<iostream>
using namespace std;
main()
{
    int who;
    fstream newfile;
    newfile.open("integer.txt" ,ios::in);
    newfile >> who;
    cout << who<<endl;
}