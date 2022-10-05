#include <iostream>
using namespace std;
struct nameType
{
    string first;
    string last;
};
struct courseType
{
    string name;
    int callNum;
    int credits;
    char grade;
};
struct studentType
{
    nameType name[10];
    double gpa;
    courseType course;
};
studentType student;
studentType classList[100];
courseType course;
nameType name;
main()
{
    classList[0].name[1].first="re";
    cout<<classList[0].name[1].first;
}