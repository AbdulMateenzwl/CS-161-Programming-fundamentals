#include <iostream>
using namespace std;
int main()
{
    int eng, math, chem, socialS, bio, total;
    string grade, name;
    float percent;
    cout << "What is the name of student: ";
    cin >> name;
    cout << "Enter the marks of test of English: ";
    cin >> eng;
    cout << "Enter the marks of test of Maths: ";
    cin >> math;
    cout << "Enter the marks of test of Chemistry: ";
    cin >> chem;
    cout << "Enter the marks of test of Social Studies: ";
    cin >> socialS;
    cout << "Enter the marks of test of Biology: ";
    cin >> bio;
    total = eng + math + chem + socialS + bio;
    cout << "Student name: " << name << endl;
    cout << "Total marks gained: " << total << endl;
    percent = total / 500.0 * 100.0;
    cout << "Obtained Percentage is: " << percent << endl;

    if (percent > 90 && percent < 100)
    {
        grade = "A+";
    }
    else if (percent > 80 && percent < 89)
    {
        grade = "A";
    }
    else if (percent > 70 && percent < 79)
    {
        grade = "B+";
    }
    else if (percent > 60 && percent < 69)
    {
        grade = "B";
    }
    else if (percent > 50 && percent < 59)
    {
        grade = "C";
    }
    else if (percent > 40 && percent < 49)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }
    cout << "Grade: ";
    cout << grade;

    return 0;
}