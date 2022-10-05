#include <iostream>
using namespace std;
int main()
{
    int current;
    int charge;
    int time;
    cout << "Enter the value of charge: ";
    cin >> charge;
    cout << "Enter the value of time: ";
    cin >> time;
    current = charge / time;
    cout << "The value of current is: ";
    cout << current;
}