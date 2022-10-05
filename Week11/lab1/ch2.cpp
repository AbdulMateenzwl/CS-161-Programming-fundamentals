#include<fstream>
#include<iostream>
using namespace std;
main()
{
    char ch;
    int yt=0;
    fstream newfile;
    char count;
    cout <<"Enter Character : "<<endl;
    cin >> count; 
    newfile.open("english.txt" , ios::in);
    while(!newfile.eof())
    {
        newfile >> ch;
        if(ch == count)
        {
            yt++;
        }
    }
    newfile.close();
    cout <<yt;
}