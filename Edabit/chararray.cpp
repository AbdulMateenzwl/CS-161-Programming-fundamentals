#include<iostream>
using namespace std;
main()
{
    int num;
    cout <<" Enter number : ";
    cin >> num;
    char count[9]={'A' ,'B' ,'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I'};
    for(int x=1 ; x <= num ; x++)
    {
        for (int m =0 ; m < x; m++)
        {
            cout<<count[m];
        }
        cout<<endl;
    }
}