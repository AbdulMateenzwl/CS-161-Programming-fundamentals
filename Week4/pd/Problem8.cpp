#include <iostream>
using namespace std;

main()
{
	int num, div, mod;
	string Fnum, Snum;
	cout << "Enter any number between 0 and 100: ";
	cin >> num;
	div = num / 10;
	mod = num % 10;

	if (div == 2)
	{
		Fnum = "Twenty";
	}
	if (div == 3)
	{
		Fnum = "Thirty";
	}
	if (div == 4)
	{
		Fnum = "Forty";
	}
	if (div == 5)
	{
		Fnum = "Fifty";
	}

	if (div == 6)
	{
		Fnum = "Sixty";
	}
	if (div == 7)
	{
		Fnum = "Seventy";
	}
	if (div == 8)
	{
		Fnum = "Eighty";
	}
	if (div == 9)
	{
		Fnum = "Ninty";
	}
	if (div == 10)
	{
		Fnum = "Hundered";
	}

	if (mod == 0)
	{
		Snum = " ";
	}
	if (mod == 1)
	{
		Snum = "One";
	}
	if (mod == 2)
	{
		Snum = "Two";
	}
	if (mod == 3)
	{
		Snum = "Three";
	}
	if (mod == 4)
	{
		Snum = "Four";
	}
	if (mod == 5)
	{
		Snum = "Five";
	}
	if (mod == 6)
	{
		Snum = "Six";
	}
	if (mod == 7)
	{
		Snum = "Seven";
	}
	if (mod == 8)
	{
		Snum = "Eight";
	}
	if (mod == 9)
	{
		Snum = "Nine";
	}

	if (num == 10)
	{
		Fnum = "Ten";
		Snum = " ";
	}
	if (num == 11)
	{
		Fnum = "Eleven";
		Snum = " ";
	}
	if (num == 12)
	{
		Fnum = "Twelve";
		Snum = " ";
	}
	if (num == 13)
	{
		Fnum = "Thirteen";
		Snum = " ";
	}

	if (num == 14)
	{
		Fnum = "Fourteen";
		Snum = " ";
	}
	if (num == 15)
	{
		Fnum = "Fifteen";
		Snum = " ";
	}
	if (num == 16)
	{
		Fnum = "Sixteen";
		Snum = " ";
	}
	if (num == 17)
	{
		Fnum = "Seventeen";
		Snum = " ";
	}
	if (num == 18)
	{
		Fnum = "Eighteen";
		Snum = " ";
	}
	if (num == 19)
	{
		Fnum = "Nineteen";
		Snum = " ";
	}
	cout << Fnum << " " << Snum;
}