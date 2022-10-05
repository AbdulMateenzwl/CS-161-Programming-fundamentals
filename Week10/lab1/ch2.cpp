#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
string question[] = {"3+6=?", "2+2=?", "3+3=?", "2+1=?", " 5-3=?", "9-5=?", "6-2=?", "5+1=?", " 7-3=?", "5-1=?"};
int ans1[] = {9, 5, 1, 3, 7, 6, 4, 5, 0, 4};
int ans2[] = {3, 4, 4, 6, 2, 1, 6, 6, 2, 2};
int ans3[] = {6, 8, 6, 8, 1, 4, 2, 6, 4, 1};
char correct[] = {'a', 'b', 'c', 'a', 'b', 'c', 'a', 'b', 'c', 'a'};
char input[10];
int count[3];
int wrong[3];
main()
{
    for (int t = 0; t < 3; t++)
    {
        int cnt=1;
        for (int x = 0; x < 10; x++)
        {
            int num = 1;
            
            cout << "//////////////////////////// STUDENT "<<(t+1)<<" ////////////////////////////////////////"<<endl;
            cout << endl;
            cout << "( "<<cnt<<" )\t"<<question[x] << endl;
            cout << endl;
            cout << "Select option a,b or c ................." << endl;
            cout << endl;
            cout << num << ")   " << ans1[x] << endl;
            num = num + 1;
            cout << num << ")   " << ans2[x] << endl;
            num = num + 1;
            cout << num << ")   " << ans3[x] << endl;
            num = 1;
            cin >> input[x];
            system("cls");
            cnt= cnt+1;
        }
        for (int x = 0; x < 10; x++)
        {
            if (input[x] == correct[x])
            {
                count[t] = count[t] + 1;
            }
        }
        wrong[t] = 10 - count[t];
        cout << "Your option\tCorrect option" << endl;
        for (int m = 0; m < 10; m++)
        {
            cout << input[m] << "\t\t\t" << correct[m] << endl;
        }
        cout << "Correct options are : " << count[t] << endl;
        cout << "wrong options are : " << wrong[t] << endl;
        getch();
        system("cls");
        
    }
    for (int y = 0; y < 3; y++)
    {
        int answer=count[y] * 10;
        float percent = answer - ((0.25) * wrong[y]*10);
        cout << "Percentage of student "<<(y+1)<<" : " << percent << endl;
        cout<<endl;
    }
}