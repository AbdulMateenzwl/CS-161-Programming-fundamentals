#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void game()
{
    string str;
    int row = -1, clm = -1;
    char game[5][5] =
        {{'.', '.', '.', '*', '*'},
         {'.', '*', '.', '.', '.'},
         {'.', '*', '.', '.', '.'},
         {'.', '*', '.', '.', '.'},
         {'.', '.', '*', '*', '.'}};
    cout << "Enter string :";
    cin >> str;
    if (str[0] == 'A')
    {
        row = 0;
    }
    if (str[0] == 'B')
    {
        row = 1;
    }
    if (str[0] == 'C')
    {
        row = 2;
    }
    if (str[0] == 'D')
    {
        row = 3;
    }
    if (str[0] == 'E')
    {
        row = 4;
    }
    char str1=str[1];
    if (str1 == '1')
    {
        clm = 0;
    }
    if (str1 == '2')
    {
        clm = 1;
    }
    if (str1 == '3')
    {
        clm = 2;
    }
    if (str1 == '4')
    {
        clm = 3;
    }
    if (str1 == '5')
    {
        clm = 4;
    }
    

    if(game[row][clm] == '*')
    {
        cout<<"BOOM";
    }
    if(game[row][clm] == '.')
    {
        cout<<"SPLASH";
    }
}
main()
{
    game();
}