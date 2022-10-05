#include<iostream>
using namespace std;
main()
{
    int num=0 ;
    cout << "Enter the number of Elements you want to add"<<endl;
    cin >> num;
    int yt=0;
    char array[num];
    int count[num]={0};
    for(int i =0 ; i < num ; i++)
    {
        cout << "Enter Element"<<endl;
        cin >> array[i];
        for(int y =0 ; y <= i ; y++)
        {
            if(array[i] == array[y])
            {
                count[y] = count[y] + 1;
                break;
            }
        }
    }
    int num2 = count[0],index = 0;
    for(int d =1 ; d < num  ; d++)
    {
        if (count[d] > num2)
        {
            num2 = count[d];
            index = d ;
        }
    }
    cout<<array[index];
    
}