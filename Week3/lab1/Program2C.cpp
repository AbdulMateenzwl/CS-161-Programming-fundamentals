#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum1, sum2, sum;
    cout << "Please enter first number: ";
    cin >> num1;
    cout << "Please enter second number: ";
    cin >> num2;
    sum1 = num1 + (num1 + num1) + (num1 + num1 + num1) + (num1 + num1 + num1 + num1) + (num1 + num1 + num1 + num1 + num1);
    sum2 = num2 + (num2 + num2) + (num2 + num2 + num2) + (num2 + num2 + num2 + num2) + (num2 + num2 + num2 + num2 + num2);
    cout << "First series is: " << sum1 << endl;
    cout << "Second series is: " << sum2 << endl;
    sum = sum1 + sum2;
    cout << "Total sum of both multiples is: " << sum << endl;
}