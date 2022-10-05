#include <iostream>
using namespace std;
int array[3][5] = {
{2, 0, 1, 0, 0},
{0, 0, 0, 1, 0},
{0, 0, 0, 0, 0}};
void parking_exit();
main()
{
    system("cls");
    cout<<endl;
    for(int x=0;x<3;x++)
    {
        for(int m=0;m<5;m++)
        {
            cout<<"  "<<array[x][m]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout << "The way to outside is : " << endl<<endl;
    parking_exit();
}
void parking_exit()
{
    bool previous = false;
    int var[3] = {};
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array[i][j] == 2)
            {
                var[0] = j;
            }
            if (array[i][j] == 1)
            {
                var[i + 1] = j;
            }
        }
    }
    if (var[0] - var[1] != 0)
    {
        if (var[0] - var[1] < 0)
        {
            cout << -1 * (var[0] - var[1]) << " steps right." << endl;
        }
        else if (var[0] - var[1] > 0)
        {
            cout << (var[0] - var[1]) << " steps left." << endl;
        }
    }
    else
    {
        cout << "One step down." << endl;
        previous = true;
    }
    if (previous != true)
        cout << "One step down." << endl;
    previous = false;
    if (var[1] != var[2])
    {
        if (var[1] - var[2] < 0)
        {
            cout << -1 * (var[1] - var[2]) << " steps right." << endl;
        }
        else
        {
            cout << (var[1] - var[2]) << " steps left." << endl;
        }
    }
    else
    {
        cout << "One step down." << endl;
        previous = true;
    }
    if (previous != true)
        cout << "One step down." << endl;
    if (4 - var[2] != 0)
    {
        cout << (4 - var[2]) << " steps right." << endl;
    }
    else
    {
        cout << "One step down." << endl;
    }
}