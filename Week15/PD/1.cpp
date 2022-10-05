#include <iostream>
#include <conio.h>
using namespace std;
struct studentType
{
    string fname;
    string lname;
    int score;
    char grade;
};
studentType student[100];
main()
{
    int count=0;
    for (int x = 0; x < 100; x++)
    {
        char ch;
        cout << "Enter First name";
        cin >> student[x].fname;
        cout << "Enter Last name";
        cin >> student[x].lname;
        cout << "Enter Score";
        cin >> student[x].score;
        if(student[x].score > 10)
        {
            student[x].grade='A';
        }
        else
        {
            student[x].grade='B';
        }
        cout << "Press 1 to exit";
        cin>>ch;
        if (ch == '1')
        {
            break;
        }
        count++;
    }
    system("cls");
    for(int x=0;x<count;x++)
    {
        cout<<student[x].fname<<"   "<<student[x].lname<<"      "<<student[x].score<<"      "<<student[x].grade<<endl;
    }
}