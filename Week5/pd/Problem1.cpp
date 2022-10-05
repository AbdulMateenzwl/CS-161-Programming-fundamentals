#include <iostream>
using namespace std;
int main()
{
    string temp, humid;
    cout << "What is the temperature: ";
    cin >> temp;
    cout << "What is the humidity level: ";
    cin >> humid;

    if (temp == "warm" || temp == "Warm")
    {
        if (humid == "dry" || humid == "Dry")
        {
            cout << "Play tennis";
        }
        else if (humid == "humid" || humid == "Humid")
        {
            cout << "Swim";
        }
    }
    else if (temp == "cold" || temp == "Cold")
    {
        if (humid == "dry" || humid == "Dry")
        {
            cout << "Play basketball";
        }
        else if (humid == "humid" || humid == "Humid")
        {
            cout << "Watch TV";
        }
    }

    return 0;
}