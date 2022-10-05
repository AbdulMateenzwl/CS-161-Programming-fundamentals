#include <iostream>
#include <fstream>
#include<stdlib.h>
#include <conio.h>
#include <windows.h>
bool ft = 0, st = 0;
using namespace std;
int X=5,Y=5;
int gx=1,gy=1;
const int SIZEN = 20;
char name[SIZEN][SIZEN] =
{
    {"###################"},
    {"#       #         #"},
    {"#    ####  ###    #"},
    {"#       #         #"},
    {"#     ######      #"},
    {"#                 #"},
    {"#   ######        #"},
    {"#   #        #    #"},
    {"#   ####     #    #"},
    {"#   #        #    #"},
    {"#            ######"},
    {"#                 #"},
    {"#######    ####   #"},
    {"#     #    #      #"},
    {"#     #           #"},
    {"#     #####       #"},
    {"#                 #"},
    {"#    #####     ####"},
    {"#                 #"},
    {"###################"}
};
void display()
{
    for(int x=0;x< SIZEN;x++)
    {
        for(int m=0;m< SIZEN ; m++)
        {
            cout<<name[x][m]<<"  ";
        }
        cout<<endl;
    }
}
void moveup()
{
    if(name[X-1][Y] != '#')
    {
        swap(name[X][Y],name[X-1][Y]);
    X--;
    }
}
void movedown()
{
    if(name[X+1][Y] != '#')
    {
        swap(name[X][Y],name[X+1][Y]);
    X++;
    }
}
void moveright()
{
    if(name[X][Y+1] != '#')
    {
        swap(name[X][Y],name[X][Y+1]);
    Y++;
    }
    
}
void moveleft()
{
    if(name[X][Y-1] != '#')
    {
        swap(name[X][Y],name[X][Y-1]);
    Y--;
    }
}
void moveghost()
{
    if (name[gx][gy + 1] == '#')
    {
        ft = 1;
        st = 0;
    }
    else if (name[gx][gy - 1] == '#')
    {
        st = 1;
        ft = 0;
    }
    if (ft == 1)
    {
        swap(name[gx][gy], name[gx][gy - 1]);
        gy = gy - 1;
    }
    if (st == 1)
    {
        swap(name[gx][gy], name[gx][gy + 1]);
        gy = gy + 1;
    }
}
main()
{
    name[X][Y]='P';
    name[gx][gy]='G';
    char ch;
    while(1)
    {
        // Sleep(100);
        system("cls");
        display();
        
        if(GetAsyncKeyState(VK_LEFT))
        {
            moveleft();
        }
        else if(GetAsyncKeyState(VK_RIGHT))
        {
            moveright();
        }
        else if(GetAsyncKeyState(VK_UP))
        {
            moveup();
        }
        else if(GetAsyncKeyState(VK_DOWN))
        {
            movedown();
        }
        else if(GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
        moveghost();
    }
}