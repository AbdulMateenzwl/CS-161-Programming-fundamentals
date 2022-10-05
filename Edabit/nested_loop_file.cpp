#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream file;
    string str;
    file.open("maze.txt",ios::in);
    for(int x=0;x<rows;x++)
    {
        getline(file,str);
        for(int m=0;m<coloums;m++)
        {
            maze[x][m]=str[m];
        }
    }
}