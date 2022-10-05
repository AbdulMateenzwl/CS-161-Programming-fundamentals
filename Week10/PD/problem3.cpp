#include<iostream>
using namespace std;
void name()
{
    int num=0 ;
    cout << "Enter the number of Elements you want to add"<<endl;
    cin >> num;
    char array[num];
    int count[num]={0};
    for(int i =0 ; i < num ; i++)
    {
        cout << "Enter Element"<<endl;
        cin >> array[i];
        for(int y = 0 ; y <= i ; y++)
        {
            if(array[i] == array[y])
            {
                count[y] = count[y] + 1;
                break;
            }
        }
    }
    for(int d =0 ; d < num  ; d++)
    {
        if (count[d] %2 == 1)
        {
            cout<<"The number repeted ODD times is "<<array[d];
            break;
        }
    }
}
main()
{
    name();
}