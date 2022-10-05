#include<iostream>
using namespace std;
void disp(int *p)
{
    cout<<*p<<endl;
}
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,0};
    for(int x=0;x<10;x++)
    {
        disp(&array[x]);
    }
    return 0;
}