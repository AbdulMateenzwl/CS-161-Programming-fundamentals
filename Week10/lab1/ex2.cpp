#include <iostream>
#include <cmath>
using namespace std;
int roll[]={1,2,3,4,5};
float cgpa[]={3.3,2.9,2.7,3.9,3.8};
void cgpat(int num)
{
    for(int x=0 ; x<5 ; x++)
    {
        if(roll[x] == num)
        {
            cout<<"The CGPA of roll number "<<num<<" is "<<cgpa[x];
        }
    }
}
main()
{
    int num;
    cout<<"Enter roll number of student";
    cin>>num;
    cgpat(num);
}