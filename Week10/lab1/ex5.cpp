#include <iostream>
#include <cmath>
using namespace std;
string name[5];
int age[5];
int inputt()
{
    for(int x =0 ;x<5 ; x++)
    {
        cout<<"Enter the name  ";
        cin >> name[x];
        cout<< "Enter age   ";
        cin >> age[x];
    }
    return 0;
}
int largestnum(int i)
{
    int large =-1;
    int index;
    for(int j =i ; j<5 ; j++)
    {
        if(age[j] > large)
        {
            large = age[j];
            index=j;
        }
        
    }
    return index;
}
void display()
{
    cout<<"The sorted list is "<<endl;
    cout<<"Name "<<"\t"<<"Age"<<endl;
    for(int i =0 ; i <5 ; i++)
    {
        cout<<name[i]<<"\t"<<age[i]<<endl;
    }
}

main()
{
    inputt();
    int temp,index;
    string temp1;
    for(int i =0 ; i < 5 ; i++ )
    {
        index=largestnum(i);
        temp=age[i];
        temp1=name[i];
        age[i] = age[index];
        name[i] = name[index];
        age[index] = temp;
        name[index] = temp1;
    }
    display();
    cout<<endl;
}