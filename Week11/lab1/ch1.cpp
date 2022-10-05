#include<fstream>
#include<iostream>
using namespace std;
main()
{
    char ch;
    int yt=1;
    fstream newfile;
    char count;
    bool isfound =false;
    cout <<"Enter Character : "<<endl;
    cin >> count; 
    newfile.open("english.txt" , ios::in);
    while(!newfile.eof())
    {
        newfile >> ch;
        if(ch == count)
        {
            break;
            isfound = true;
        }
        yt++;
    }
    newfile.close();
    if(yt != 1 && isfound == true)
    {
        cout <<yt;
    }
    else
    {
        cout <<"-1";
    }
}