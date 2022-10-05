#include <iostream>
using namespace std;
int main()
{
    char service, time;
    int min, moreMin;
    float charges;
    cout << "Enter the type of service you are availing(Press R for regular and P for premium): ";
    cin >> service;
    if (service == 'R' || service == 'r')
    {
        cout << "Enter the number of minutes you used the service: ";
        cin >> min;
        if (min > 50)
        {
            moreMin = min - 50;
            charges = moreMin * 0.20;
            charges = charges + 10.00;
            cout << "The charges are: " << charges << "$";
        }
        else
        {
            cout << "The charges are 10.00$";
        }
    }
    else if (service == 'P' || service == 'p')
    {
        cout << "Press D for day and N for night: ";
        cin >> time;
        if (time == 'D' || time == 'd')
        {
            cout << "Enter the number of minutes you used the service: ";
            cin >> min;
            if (min > 75)
            {
                moreMin = min - 75;
                charges = moreMin * 0.10;
                charges = charges + 25.00;
                cout << "The charges are: " << charges << "$";
            }
            else
            {
                cout << "The charges are 25$";
            }
        }
        else if (time == 'N' || time == 'n')
        {
            cout << "Enter the number of minutes you used the service: ";
            cin >> min;
            if (min > 100)
            {
                moreMin = min - 50;
                charges = moreMin * 0.05;
                charges = charges + 25.00;
                cout << "The charges are: " << charges << "$";
            }
            else
            {
                cout << "The charges are 25$";
            }
        }
    }
    else
    {
        cout << "ERROR";
    }

    return 0;
}