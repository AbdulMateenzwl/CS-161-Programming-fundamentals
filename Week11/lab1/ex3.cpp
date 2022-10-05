#include<fstream>
#include<iostream>
using namespace std;
main()
{
    char ch;
    fstream newfile;
    newfile.open("character.txt" , ios:: out);
    cout << "Enter any character : "<<endl;
    cin >> ch;
    newfile << ch;
    newfile.close();
}