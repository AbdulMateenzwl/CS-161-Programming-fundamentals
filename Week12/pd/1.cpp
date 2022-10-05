#include <iostream>
#include<conio.h>
#include<fstream>
using namespace std;
char seats[13][6];
void load()
{
    fstream loadseats;
    loadseats.open("1.txt" , ios::in);
    for (int x = 0; x < 16; x++)
    {
        for (int m = 0; m < 6; m++)
        {
            loadseats >> seats[x][m];
        }
    }
    loadseats.close();
}
void display()
{
    for (int x = 0; x < 16; x++)
    {
        for (int m = 0; m < 6; m++)
        {
            cout << seats[x][m] << "     ";
        }
        cout << endl;
    }
}
void input()
{
    while (1)
    {
        system("cls");
        int clas;
        int row;
        char clm;
        display();
        cout << "Enter class : " << endl;
        cout << "1) First class" << endl;
        cout << "2) Buisness Class" << endl;
        cout << "3) Economy Class" << endl;
        cin >> clas;
        cout << "Enter row :";
        cin >> row;
        cout << "Enter coloumn : ";
        cin >> clm;
        row = row - 1;
        int coloumn;
        if (clm == 'a')
            coloumn = 0;
        if (clm == 'b')
            coloumn = 1;
        if (clm == 'c')
            coloumn = 2;
        if (clm == 'd')
            coloumn = 3;
        if (clm == 'e')
            coloumn = 4;
        if (clm == 'f')
            coloumn = 5;
        if (seats[row][coloumn] == '*')
        {
            seats[row][coloumn] = 'X';
            break;
        }
        else
        {
            cout << "Seat is occupied." << endl;
            cout<<"Press any key to Enter again.....";
            getch();
        }
    }
}
void store()
{
    fstream store;
    store.open("1.txt",ios::out);
    for(int x=0;x<16;x++)
    {
        for(int m=0;m<6;m++)
        {
            store<<seats[x][m]<<" ";
        }
        cout<<endl;
    }
    store.close();
}

main()
{
    load();
    input();
    store();
}