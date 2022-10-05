#include <iostream>
using namespace std;
main()
{
    int num1, num2;
    cout << "Enter First number: ";
    cin >> num1;
    cout << "Enter Second number: ";
    cin >> num2;
    int n;
    cout << "Enter how much fibonacci sequence you want: ";
    cin >> n;
    int i;

    cout << "Fibonacci sequence is: ";
    cout << num1 << " " << num2 << " ";
    num1 = num1 + num2;
    cout << num1 << " ";
    num2 = num1 + num2;
    cout << num2 << " ";
    num1 = num1 + num2;
    cout << num1 << " ";
    num2 = num1 + num2;
    cout << num2 << " ";
    num1 = num1 + num2;
    cout << num1 << " ";
}