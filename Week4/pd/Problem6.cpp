#include <iostream>
using namespace std;

main()
{
	float speed;
	string sp;
	cout << "Enter Speed: ";
	cin >> speed;

	if (speed <= 10)
	{
		sp = "The speed is slow";
	}
	else if (speed <= 50)
	{
		sp = "The speed is Average";
	}
	else if (speed <= 150)
	{
		sp = "The speed is Fast";
	}
	else if (speed <= 1000)
	{
		sp = "The speed is Ultra Fast";
	}
	else if (speed > 1000)
	{
		sp = "The speed is Extremely Fast";
	}
	cout << sp;
}