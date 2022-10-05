#include<iostream>
#include<conio.h>
using namespace std;
char object[5][5]={
    {'-','#','#','-','#'},
    {'#','-','-','#','-'},
    {'-','#','-','-','-'},
    {'#','-','#','-','#'},
    {'#','-','-','-','-'}
};
void display()
{
    for(int x=0;x < 5 ; x++)
    {
        for(int p=0;p<5 ; p++)
        {
            cout<<object[x][p]<<"\t";
        }
        cout<<endl;
    }
}
void gravity(int x)
{
    int y=0;
    while(y != x)
    {
        for (int x = 4; x > 0; x--)
        {
            for (int p = 0; p < 5; p++)
            {
                if (object[x][p] == '-')
                {
                    swap(object[x][p], object[x - 1][p]);
                }
            }
        }
        y++;
    }
    display();
}
void black_hole(int x)
{
    char store[5];
    int y=0;
    while(y != x)
    {
        for (int x = 0; x < 5; x++)
        {
            store[x] = object[4][x];
        }
        for (int x = 4; x > 0; x--)
        {
            for (int p = 0; p < 5; p++)
            {
                swap(object[x][p], object[x - 1][p]);
            }
        }
        for (int x = 0; x < 5; x++)
        {
            object[0][x]=store[x];
        }
        y++;
    }
    display();
}
main()
{
    system("cls");
    display();
    int choose;
    cout<<"What do you want to Use : "<<endl;
    cout<<"1) Gravity"<<endl;
    cout<<"2) Blackhole"<<endl;
    cin >> choose;
    cout<<endl<<endl;
    int x;
    cout<<"Enter time :";
    cin >> x;
    if(choose == 1)
    {
        gravity(x);
    }
    else if(choose == 2)
    {
        black_hole(x);
    }
    else
    {
        cout<<"You have entered wrong input!!!!";
        system("pause");
    }
}