#include <iostream>
using namespace std;
int main()
{
    float matric, inter, ecat;
    float matric_percent, inter_percent, ecat_percent, total;
    cout << "Enter your Obtained Matric Marks: ";
    cin >> matric;
    matric_percent = matric / 1100 * 25;
    cout << "Enter your Obtained Inter Marks: ";
    cin >> inter;
    inter_percent = inter / 1100 * 45;
    cout << "Enter your Obtained Ecat Marks: ";
    cin >> ecat;
    ecat_percent = ecat / 400 * 30;
    total = matric_percent + inter_percent + ecat_percent;
    cout << "Your aggregate is: " << total;
}