#include <iostream>
using namespace std;

main()
{
	int red, white, tulip;
	float price, discount, discPrice;
	cout << "Enter the number of Red Roses: ";
	cin >> red;
	// 2.00 dollars/pc
	cout << "Enter the number of White Roses: ";
	cin >> white;
	// 4.10 dollars/pc
	cout << "Enter the number of Tulips: ";
	cin >> tulip;
	// 2.50 dollars/pc
	price = (red * 2.00) + (white * 4.10) + (tulip * 2.50);
	cout << "Original Price is: " << price << endl;
	if (price > 200)
	{
		discount = price * 20.0 / 100.0;
		discPrice = price - discount;
		cout << "Price After Discount is: " << discPrice;
	}
}