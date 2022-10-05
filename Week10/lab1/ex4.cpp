#include <iostream>
#include <cmath>
using namespace std;
char voucher[]={'a','b','c','d','e'};
float discount[] = { 0.25,0.1,0.2,0.3,0.5};

int indext(char vch)
{
    for(int x =0 ; x<5 ; x++ )
    {
        if(vch == voucher[x])
        {
            return x;
        }
    }
    return -1;
}
float discountt(int price,int num,int index)
{
    if (index >= 0 && index <= 4)
    {
        float total_p = price * num;
        total_p = total_p - (total_p * discount[index]);
        return total_p;
    }
    else
    {
        cout<<"You have entered the wrong voucher"<<endl;
    }
    return 0;
}

main()
{
    int price,num,index,discount;
    char vch;

    cout<<"Enter price of item ";
    cin>> price;
    cout<<"Enter number of products";
    cin >> num;
    cout<<"Enter voucher";
    cin >> vch;
    index=indext(vch);
    discount=discountt(price,num,index);
    cout<<"Toatal price is "<<discount;

}