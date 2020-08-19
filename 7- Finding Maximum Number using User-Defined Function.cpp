// Find Maximum Number

#include<iostream>
using namespace std;
float find_max(float a, float b, float c);
void main()
{
	float a, b, c;
	cout << "Enter First Number: ";
		cin >> a;
	cout << "Enter Second Number: ";
		cin >> b;
	cout << "Enter Third Number: ";
		cin >> c;
	cout << endl;
	
	cout << "Largest Number is: " << find_max(a, b, c);
	cout << endl;
}
float find_max(float a, float b, float c)
{
	if (a > b && a > c)
		return a;
	else if (b > a && b > c)
		return b;
	else
		return c;
}