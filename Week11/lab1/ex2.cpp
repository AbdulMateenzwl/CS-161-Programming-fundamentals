#include<fstream>
#include<iostream>
using namespace std;
main()
{
    int value;
    fstream newfile;
    newfile.open("integer.txt" , ios :: out);
    cout << "Enter integer value "<<endl;
    cin >> value;
    newfile << value;
    newfile.close();
}