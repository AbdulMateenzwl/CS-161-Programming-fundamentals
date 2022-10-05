#include <iostream>
using namespace std;
main()
{
	string shape;
	float area, length, breadth, radius, base, height;
	cout << "What is the figure of the shape: ";
	cin >> shape;
	if (shape == "Square")
	{
		cout << "Enter the length of any side of square: ";
		cin >> length;
		area = length * length;
	}
	if (shape == "Rectangle")
	{
		cout << "Enter the length of rectangle: ";
		cin >> length;
		cout << "Enter the breadth of rectangle: ";
		cin >> breadth;
		area = length * breadth;
	}
	if (shape == "Circle")
	{
		cout << "Enter the radius of circle: ";
		cin >> radius;
		area = radius * radius * (3.14);
	}
	if (shape == "Triangle")
	{
		cout << "Enter the base of triangle: ";
		cin >> base;
		cout << "Enter the height of triangle: ";
		cin >> height;
		area = base * height / 2;
	}
	cout << "The area of " << shape << " is: " << area;
}