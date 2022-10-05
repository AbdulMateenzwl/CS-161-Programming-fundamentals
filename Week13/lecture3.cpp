#include<iostream>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<fstream>
using namespace std;
int X=9,Y=31;
int score=0;
char pre=' ';
bool ft=1,st=0;
int gx1=19 ,gy1=25 ;
char maze[24][71]={
{"######################################################################"},
{"||.. .....................................................  ......  ||"}, 
{"||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||"}, 
{"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"}, 
{"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"}, 
{"||..        %%%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||"}, 
{"||..        |%|       . . |%|...    ............... |%| ..       .  ||"}, 
{"||..        %%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||"}, 
{"||..               |%|.             |%|......       |%| ..    |%|.  ||"}, 
{"||..     ......... |%|.             |%|......|%|        ..    |%|.  ||"}, 
{"||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.  ||"}, 
{"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||"}, 
{"||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||"}, 
{"||..|%|            .           ...|%|               |%| ..|%|.      ||"}, 
{"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"}, 
{"||...............................................   |%| ..........  ||"}, 
{"||   ............................................          .......  ||"}, 
{"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.      ||"}, 
{"||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.      ||"}, 
{"||..|%|            .           ...|%|               |%| ..|%|.      ||"}, 
{"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"}, 
{"||...............................................   |%| ..........  ||"}, 
{"||  .............................................          .......  ||"}, 
{"######################################################################"}
};
void display()
{
    for (int x=0;x< 24;x++)
    {
        for(int m=0;m<70;m++)
        {
            cout<<maze[x][m];
        }
        cout<<endl;
    }
}
void score1()
{
    cout<<"Score :"<<score;
}
int ghostDirection()
{
    srand(time(0));
    int result = 1 + (rand() % 4);
    return result;
}
void gotoxy(int x,int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void moveup()
{
    if (maze[X-1][Y] == '.')
    {
        score++;
        gotoxy(Y,X-1);
        cout<<' ';
        maze[X-1][Y]=' ';
    }
    if (maze[X - 1][Y] != '#' && maze[X - 1][Y] != '%' && maze[X - 1][Y] != '|')
    {
        gotoxy(Y,X-1);
        cout<<'P';
        maze[X-1][Y]='P';
        gotoxy(Y,X);
        cout<<' ';
        maze[X][Y]=' ';
        X--;
    }
}
void movedown()
{
    if (maze[X+1][Y] == '.')
    {
        score++;
        gotoxy(Y,X+1);
        cout<<' ';
        maze[X+1][Y]=' ';
    }
    if(maze[X+1][Y] != '#' && maze[X+1][Y] != '%' && maze[X+1][Y] != '|')
    {
        gotoxy(Y,X+1);
        cout<<'P';
        maze[X+1][Y]='P';
        gotoxy(Y,X);
        cout<<' ';
        maze[X][Y]=' ';
        X++;
    }
}
void moveright()
{
    if (maze[X][Y+1] == '.')
    {
        score++;
        gotoxy(Y+1,X);
        cout<<' ';
        maze[X][Y+1]=' ';
    }
    if(maze[X][Y+1] != '#' && maze[X][Y+1] != '%' && maze[X][Y+1] != '|')
    {
        gotoxy(Y+1,X);
        cout<<'P';
        maze[X][Y+1]='P';
        gotoxy(Y,X);
        cout<<' ';
        maze[X][Y]=' ';
        Y++;
    }
}
void moveleft()
{
    if (maze[X][Y - 1] == '.')
    {
        score++;
        gotoxy(Y-1,X);
        cout<<' ';
        maze[X][Y-1]=' ';
    }
    if (maze[X][Y - 1] != '#' && maze[X][Y - 1] != '%' && maze[X][Y - 1] != '|')
    {
        gotoxy(Y-1,X);
        cout<<'P';
        maze[X][Y-1]='P';
        gotoxy(Y,X);
        cout<<' ';
        maze[X][Y-1]=' ';
        Y--;
    }
}
bool ghost1()
{
    int value = ghostDirection();
    if (value == 1)
    {
        if(maze[gx1-1][gy1]==' ' || maze[gx1-1][gy1]=='.' || maze[gx1-1][gy1]=='P')
        {
            maze[gx1][gy1] = pre;
            gotoxy(gy1, gx1);
            if (maze[gx1][gy1] == '.')
                {cout << '.';}
            else
                {cout << ' ';}
            gx1--;
            pre = maze[gx1][gy1];
            if (maze[gx1 - 1][gy1] == 'P')
            {
                return 1;
            }
            maze[gx1][gy1] = 'G';
            gotoxy(gy1, gx1);
            cout << 'G';
        }
    }
    if (value == 2)
    {
        if(maze[gx1+1][gy1]==' ' || maze[gx1+1][gy1]=='.' || maze[gx1+1][gy1]=='P')
        {
            maze[gx1][gy1] = pre;
            gotoxy(gy1, gx1);
            if (maze[gx1][gy1] == '.')
                {cout << '.';}
            else
                {cout << ' ';}
            gx1++;
            pre = maze[gx1][gy1];
            if (maze[gx1 + 1][gy1] == 'P')
            {
                return 1;
            }
            maze[gx1][gy1] = 'G';
            gotoxy(gy1, gx1);
            cout << 'G';
        }
    }
    if (value == 3)
    {
        if(maze[gx1][gy1+1]==' ' || maze[gx1][gy1+1]=='.' || maze[gx1][gy1+1]=='P')
        {
            maze[gx1][gy1] = pre;
            gotoxy(gy1, gx1);
            if (maze[gx1][gy1] == '.')
                {cout << '.';}
            else
                {cout << ' ';}
            gy1++;
            pre = maze[gx1][gy1];
            if (maze[gx1][gy1+1] == 'P')
            {
                return 1;
            }
            maze[gx1][gy1] = 'G';
            gotoxy(gy1, gx1);
            cout << 'G';
        }
        
    }
    if (value == 4)
    {
        if(maze[gx1][gy1-1]==' ' || maze[gx1][gy1-1]=='.' || maze[gx1][gy1-1]=='P')
        {
            maze[gx1][gy1] = pre;
            gotoxy(gy1, gx1);
            if (maze[gx1][gy1] == '.')
                {cout << '.';}
            else
                {cout << ' ';}
            gy1--;
            pre = maze[gx1][gy1];
            if (maze[gx1][gy1-1] == 'P')
            {
                return 1;
            }
            maze[gx1][gy1] = 'G';
            gotoxy(gy1, gx1);
            cout << 'G';
        }
    }
}

main()
{
    system("cls");
    display();
    gotoxy(Y,X);
    cout<<'P';
    gotoxy(gy1,gx1);
    cout<<'G';
    while(1)
    {
        Sleep(60);
        gotoxy(Y,X);
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
        gotoxy(80,10);
        score1();
        bool yt=0;
        yt = ghost1();
        if(yt == 1) break;
    }
    system("cls");
    cout<<"Game Over";
    score1();
}