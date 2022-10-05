#include<fstream>
#include<iostream>
using namespace std;
main()
{
    string ch;
    fstream newfile;
    newfile.open("english.txt" , ios::in);
    while(!newfile.eof())
    {
        getline(newfile,ch);
        cout << ch<<endl;
    }
    newfile.close();
}