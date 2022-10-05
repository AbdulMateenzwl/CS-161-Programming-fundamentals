#include <iostream>
#include <fstream>
using namespace std;
char abc[26];
char letter_files[26];
main()
{
    for (int index = 0; index < 1;)
    {
        for (char i = 97; i <= 122; i++)
        {
            abc[index] = i;
            index++;
        }
    }
    fstream newfile;
    char c;
    int count = 0;
    newfile.open("alphabets.txt", ios::in);
    while (!newfile.eof())
    {
        newfile >> c;
        letter_files[count] = c;
        count++;
    }
    newfile.close();
    char missing_character;
    for (int i = 0; i < 26; i++)
    {
        if (abc[i] != letter_files[i])
        {
            missing_character = abc[i];
            fstream newfile;
            newfile.open("alphabets.txt", ios::app);
            newfile << missing_character << " ";
        }
    }
}