#include<fstream>
#include<iostream>
using namespace std;
main()
{
    int count=0;
    string ch;
    fstream myfile;
    myfile.open("story.txt",ios::in);
    while(!myfile.eof())
    {
        getline(myfile,ch);
        if(ch[0] != 'T')
        {
            count++;
        }
        cout<<endl;
    }
    cout <<count;
    myfile.close();
}