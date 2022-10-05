#include <iostream>
#include <cmath>
using namespace std;
int roll[]={1,2,3,4,5};
int marks[]={30,32,23,43,35};
int highest()
{
    int index=0;
    int id=0;
    for(int x=0 ; x<5 ; x++)
    {
        if(marks[x] > index )
        {
            index = marks[x];
            id=x;
        }
    }
    return id;
}

main()
{
    int y;
    y=highest();
    cout << "Roll number "<< (y+1) <<" has maximum marks "<<marks[y];
}