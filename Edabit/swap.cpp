#include <iostream>
using namespace std;
main()
{
    struct type{
        string name;
        int marks;
    };
    type stu[2];
    stu[0].name="mateen";
    stu[0].marks=7;
    stu[1].name="saqib";
    stu[1].marks=3;
    swap(stu[0],stu[1]);
    cout<<stu[0].name<<endl;
    cout<<stu[0].marks<<endl;
    cout<<stu[1].name<<endl;
    cout<<stu[1].marks<<endl;
}