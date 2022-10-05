#include<fstream>
#include<iostream>
using namespace std;
main()
{
    fstream newfile;
    newfile.open("english.txt" , ios::app);
    newfile << endl;
    string name;
    getline(cin,name);
    newfile <<name;
}