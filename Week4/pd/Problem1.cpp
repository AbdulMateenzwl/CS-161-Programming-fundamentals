#include <iostream>
using namespace std;

main()
{
	string country;
	int price;
	float discount, discPrice;
	cout << "Enter the name of country you want to visit: ";
	cin >> country;
	cout << "Enter the price: ";
	cin >> price;
	if (country == "Ireland")
	{
		discount = price * 10.0 / 100.0;
	}
	else
	{
		discount = price * 5.0 / 100.0;
	}
	discPrice = price - discount;
	cout << "Discounted Price is: " << discPrice;
}
