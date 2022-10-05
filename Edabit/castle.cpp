#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter ";
    cin >> size;
    int mid_row = 2;
    int mid_space = (size * 2) - (size / 2 + 2) * 2;
    for (int x = 0; x < 2; x++)
    {
        cout << "/";
        for (int x = 0; x < size / 2; x++)
        {
            cout << "^";
        }
        cout << char(92);
        if(x==0)
        {
            for (int x = 0; x < mid_space; x++)
            {
                cout << "_";
            }
        }
    }
    cout<<endl;
    for (int x = 1; x < size-1; x++)
    {
        cout<<"| ";
        for(int y=1; y<size*2-2;y++)
        {
            cout<<" ";
        }
        
        cout<<"| "<<endl;
    }
    for (int x = 0; x < 2; x++)
    {
        cout << char(92);
        for (int x = 0; x < size / 2; x++)
        {
            cout << "_";
        }
        cout << "/";
        if(x==0)
        {
            for (int x = 0; x < mid_space; x++)
            {
                cout << "_";
            }
        }
    }
}