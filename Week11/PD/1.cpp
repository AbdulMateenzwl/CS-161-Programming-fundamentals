#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string fine(string row,int column)
{
    int comma =1;
    string item=" ";
    for(int x=0 ; row[x] != '\0';x++ )
    {
        if(row[x] == ',')
        {
            comma++;
        }
        else if(column == comma)
        {
            item = item + row[x];
        }
    }
    return item;
}
main()
{
    fstream name;
    string row;
    name.open("name.txt" , ios:: in);
    getline(name,row);
    string v1 = fine(row,1);
    string v2 = fine(row,2);
    int num = stoi(v2);
    if(num%2 == 0)
    {
        cout<<"#####################"<<endl;
        cout<<"# "<<num<<" HB "<<v1<<"! "<<num<<" #"<<endl;
        cout<<"#####################"<<endl;
    }
    else
    {
        cout<<"*********************"<<endl;
        cout<<"* "<<num<<" HB "<<v1<<"! "<<num<<" *"<<endl;
        cout<<"*********************"<<endl;
    }
}