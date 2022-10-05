#include<iostream>
using namespace std;
struct laptop
{
    string man;
    string model;
    float processror;
    int ram;
    int hard;
    int generation;
    double price;
};
laptop we[5];
void input()
{
    for(int x=0;x<5;x++)
    {
        cout << "Enter manufacturer :";
        cin >> we[x].man;
        cout << "Enter model";
        cin >> we[x].model;
        cout << "Enter processor :";
        cin >> we[x].processror;
        cout << "Enter ram";
        cin >> we[x].ram;
        cout << "Enter hard";
        cin >> we[x].hard;
        cout << "Enter price";
        cin >> we[x].price;
    }
    
}
void display()
{
    for (int x = 0; x < 5; x++)
    {
        cout << we[x].man << endl;
        cout << we[x].model << endl;
        cout << we[x].processror << endl;
        cout << we[x].ram << endl;
        cout << we[x].hard << endl;
        cout << we[x].price << endl;
        cout<<"_______________________"<<endl;
    }
}
main()
{
    input();
    display();
}