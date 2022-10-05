#include <iostream>
using namespace std;

main()
{
	int speed;
	cout << "Enter the speed of car: ";
	cin >> speed;
	if (speed > 100)
	{
		cout << "Halt...YOU WILL BE CHALLANED!!!";
	}
	else
	{
		cout << "Perfect you are going good.";
	}
}