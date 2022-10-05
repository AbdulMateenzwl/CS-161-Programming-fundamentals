#include<fstream>
#include<iostream>
using namespace std;
main()
{
    string ch;
    fstream newfile;
    int count =0;
    newfile.open("english.txt" , ios::in);
    while(!newfile.eof())
    {
        getline(newfile,ch);
        count++;
    }
    newfile.close();
    cout <<"Total lines : "<<count<<endl;
}