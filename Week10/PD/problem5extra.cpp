#include <iostream>
using namespace std;
main()
{
    int length;
    int count = 0;
    cout << "Enter the length of Array : ";
    cin >> length;
    int array[length];
    for (int x = 0; x < length; x++)
    {
        cout << "Enter the elements : ";
        cin >> array[x];
    }
    int num= array[0];
    for(int x =0 ; x < length ; x++)
    {
        if(array[x] > num)
        {
            num=array[x];
        }
    }
    cout<<num<<endl;
    int num1= array[0];
    for(int x =0 ; x < length ; x++)
    {
        if(array[x] < num1)
        {
            num1=array[x];
        }
    }
    cout<<num1<<endl;
    if(num1+length-1 == num)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }
}