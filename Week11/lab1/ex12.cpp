#include<fstream>
#include<iostream>
using namespace std;
main()
{
    char ch;
    fstream newfile;
    int count=0;
    newfile.open("english.txt" , ios::in);
    while(!newfile.eof())
    {
        newfile >> ch;
        cout <<ch <<endl;
        count++;
    }
    newfile.close();
    cout << "Total character : "<<count;
}