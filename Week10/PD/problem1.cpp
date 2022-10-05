#include<iostream>
using namespace std;
void name()
{
    int num=0;
    char findx;
    cout << "Enter the number of Elements you want to add"<<endl;
    cin >> num;
    cout << "Enter the character you want to find";
    cin >> findx;
    char array[num];
    int count = 0;
    for(int i =0 ; i < num ; i++)
    {
        cout << "Enter Element"<<endl;
        cin >> array[i];
        if(array[i] == findx )
        {
            count = count +1;
        }
    }
    cout<<findx<<" has been repeated "<<count<<" times";
}
main()
{
    name();
}