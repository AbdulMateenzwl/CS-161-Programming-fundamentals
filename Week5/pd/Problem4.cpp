#include <iostream>
using namespace std;
int main()
{
    int date;
    string month, sign;
    cout << "Please enter your birth month: ";
    cin >> month;
    cout << "Enter your birth date: ";
    cin >> date;
    if (((month == "March" || month == "march") && date >= 21) || ((month == "April" || month == "april") && date <= 19))
    {
        cout << "You are Aries";
    }
    else if (((month == "April" || month == "april") && date >= 20) || ((month == "May" || month == "may") && date <= 20))
    {
        cout << "You are Taurus";
    }
    else if (((month == "may" || month == "May") && date >= 21) || ((month == "June" || month == "june") && date <= 20))
    {
        cout << "You are Gemini";
    }
    else if (((month == "June" || month == "june") && date >= 21) || ((month == "July" || month == "july") && date <= 22))
    {
        cout << "You are Cancer";
    }
    else if (((month == "July" || month == "july") && date >= 23) || ((month == "August" || month == "august") && date <= 22))
    {
        cout << "You are Leo";
    }
    else if (((month == "August" || month == "august") && date >= 23) || ((month == "September" || month == "september") && date <= 22))
    {
        cout << "You are Virgo";
    }
    else if (((month == "September" || month == "september") && date >= 23) || ((month == "October" || month == "october") && date <= 22))
    {
        cout << "You are Libra";
    }
    else if (((month == "October" || month == "october") && date >= 23) || ((month == "November" || month == "november") && date <= 21))
    {
        cout << "You are Scorpio";
    }
    else if (((month == "November" || month == "november") && date >= 22) || ((month == "December" || month == "december") && date <= 21))
    {
        cout << "You are Sagittarius";
    }
    else if (((month == "December" || month == "december") && date >= 22) || ((month == "January" || month == "january") && date <= 19))
    {
        cout << "You are Capricorn";
    }
    else if (((month == "January" || month == "january") && date >= 20) || ((month == "February" || month == "february") && date <= 18))
    {
        cout << "You are Aquarius";
    }
    else if (((month == "February" || month == "february") && date >= 19) || ((month == "March" || month == "march") && date <= 20))
    {
        cout << "You are Pisces";
    }

    return 0;
}