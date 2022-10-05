#include<fstream>
#include<iostream>
using namespace std;
main()
{
    fstream file;
    file.open("story.txt" , ios::in);
    string row;
    while(!file.eof())
    {
        file >> row;
        if(row.length() < 4)
        {
            cout<<row<<" ";
        }
    }
    file.close();
}