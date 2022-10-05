#include <iostream>
using namespace std;
void sty(int array[])
{
    int time;
    cout << "Enter time : ";
    cin >> time;
    int y = 0;
    while (y < time)
    {
        int value = array[0];
        for (int x = 0; x < 9; x++)
        {
            array[x]=array[x+1];
        }
        array[9]=value;
        y++;
    }
}
void display(int array[])
{
    for(int x=0;x<10;x++)
    {
        cout<<array[x]<<" ";
    }
}
main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,0};
    display(array);
    sty(array);
    display(array);
}