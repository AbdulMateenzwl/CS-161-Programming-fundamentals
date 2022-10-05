#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Please enter your number: ";
    cin >> num;
    cout << "Series is: " << num << " " << num + num << " " << num + num + num << " " << num + num + num + num << " " << num + num + num + num + num << endl;
}