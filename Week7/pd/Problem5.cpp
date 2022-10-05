#include <iostream>
using namespace std;
void Tons(int limit)
{
    int i = 1;
    float cargo;
    float sum = 0;
    float mini = 0, truck = 0, train = 0;
    float miniC = 0, truckC = 0, trainC = 0;
    while (i <= limit)
    {
        cin >> cargo;
        if (cargo <= 3)
        {
            mini++;
            miniC = miniC + cargo;
        }
        else if (cargo > 3 && cargo <= 11)
        {
            truck++;
            truckC = truckC + cargo;
        }
        else if (cargo > 11)
        {
            train++;
            trainC = trainC + cargo;
        }
        sum = sum + cargo;
        sum = sum * 1.0;

        i++;
    }

    float avg;
    avg = ((miniC * 200.0) + (truckC * 175.0) + (trainC * 120.0)) / sum;
    cout << "Average Price per ton of cargo is: " << avg << endl;
    float miniP, truckP, trainP;
    miniP = (miniC / sum) * 100.0;
    truckP = (truckC / sum) * 100.0;
    trainP = (trainC / sum) * 100.0;
    cout << "Percentage of cargo by minibus is: " << miniP << endl;
    cout << "Percentage of cargo by truck is: " << truckP << endl;
    cout << "Percentage of cargo by train is: " << trainP << endl;
}

main()
{
    int limit;
    cout << "Enter no. of limits you want to add: ";
    cin >> limit;
    Tons(limit);
}