#include <iostream>
using namespace std;
void Doctors(int days)
{
    int patients;
    int treated = 0, untreated = 0;
    int i = 1;
    int countTreat = 0, countUntreat = 0;
    int doctors = 7;
    while (i <= days)
    {
        cout << "Enter no. of patients in day " << i << " : ";
        cin >> patients;
        if (i % 3 == 0)
        {
            if (countUntreat > countTreat)
            {
                doctors++;
            }
        }
        if (patients >= doctors)
        {
            treated = doctors;
            untreated = patients - treated;
        }
        else if (patients < doctors)
        {
            treated = patients;
            untreated = 0;
        }
        countTreat = countTreat + treated;
        countUntreat = countUntreat + untreated;
        i++;
    }
    cout << "Treated patients are: " << countTreat << endl;
    cout << "Untreated patients are: " << countUntreat << endl;
}

main()
{
    cout << "Enter the period : ";
    int days;
    cin >> days;
    Doctors(days);
}