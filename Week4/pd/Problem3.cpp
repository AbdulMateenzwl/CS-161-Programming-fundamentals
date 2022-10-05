#include <iostream>
using namespace std;

main()
{
	int temp1, temp2, diff;
	cout << "Enter the temperature of city 1: ";
	cin >> temp1;
	cout << "Enter the temperature of city 2: ";
	cin >> temp2;
	diff = temp1 - temp2;
	if (diff > 10)
	{
		cout << "temperature difference is too Big" << endl;
	}
	cout << "Program Ends";
}