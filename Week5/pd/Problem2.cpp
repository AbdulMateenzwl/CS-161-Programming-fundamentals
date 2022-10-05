#include <iostream>
using namespace std;
int main()
{
    string country;
    cout << "In which country do you live in: ";
    cin >> country;
    if (country != "Germany" || country != "Australia" || country != "germany" || country != "australia")
    {
        cout << "You should visit these country sometimes";
    }

    return 0;
}