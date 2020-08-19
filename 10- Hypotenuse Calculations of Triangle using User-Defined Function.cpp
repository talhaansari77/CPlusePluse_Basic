// Find Hypotenuse

#include<iostream>
#include<cmath>
using namespace std;
double hypotenuse(double a, double b);
void main()
{
	double side1, side2;
	cout << "Enter First Side : ";
		cin >> side1;
	cout << "Enter Second Side : ";
		cin >> side2;
	cout << endl;
	
	cout << "Hypotenuse : " << hypotenuse(side1,side2);
	
	cout << endl;
}
double hypotenuse(double a, double b)

{
	double c;
	c = sqrt(pow(a,2) + pow(b,2));
	return c;
}