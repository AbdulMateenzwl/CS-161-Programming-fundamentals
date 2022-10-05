#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Please enter first number: ";
    cin >> num1;
    cout << "Please enter second number: ";
    cin >> num2;
    cout << "First series is: " << num1 << " " << num1 + num1 << " " << num1 + num1 + num1 << " " << num1 + num1 + num1 + num1 << " " << num1 + num1 + num1 + num1 + num1 << endl;
    cout << "First series is: " << num2 << " " << num2 + num2 << " " << num2 + num2 + num2 << " " << num2 + num2 + num2 + num2 << " " << num2 + num1 + num2 + num2 + num2 << endl;
}