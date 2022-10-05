#include<fstream>
#include<iostream>
using namespace std;
main()
{
    float tr;
    fstream newfile;
    newfile.open("float.txt" , ios:: in);
    newfile >> tr;
    cout << tr << endl;
    newfile.close();
}