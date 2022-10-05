#include <iostream>
#include <fstream>
using namespace std;
char abc[26];
string row;
int count=0;
string morse[26]={".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
main()
{
    int index = 0;
    for (int i = 0; i < 26; i++)
    {
        abc[i] = 97 + i;
    }
    // for (int i = 0; i <= 26; i++)
    // {
    //     cout<<abc[i]<<endl;
    // }
    cout << "Enter : ";
    cin >> row;
    for (int i = 0;row[i] != '\0'; i++)
    {
        count++;
    }
    for (int x = 0; x < 26; x++)
    {
        for (int m = 0; m <count; m++)
        {
            if (abc[x] == row[m])
            {
                cout << morse[x];
                cout << " ,  ";
                break;
            }
            else if (row[m] == ' ')
            {
                cout << "-.-.-.-";
                cout << " ,  ";
                break;
            }
        }
    }
}