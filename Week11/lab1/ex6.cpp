#include<fstream>
#include<iostream>
using namespace std;
main()
{
    char ch;
    fstream newfile;
    newfile.open("character.txt" , ios::in);
    newfile >> ch;
    cout<<ch<<endl;
}