// Find the Distance between points.

#include<iostream>
#include<cmath>
using namespace std;
double distance(double x1, double x2, double y1, double y2);
void main()
{
	double x1, x2, y1, y2;
	cout << "Enter X1: ";
	cin >> x1;
	cout << "Enter X2: ";
	cin >> x2;
	cout << "Enter Y1: ";
	cin >> y1;
	cout << "Enter Y2: ";
	cin >> y2;
	cout << endl;
	cout << "Distance : " << distance(x1, x2, y1, y2);
	cout << endl;
}
double distance(double x1, double x2, double y1, double y2)
{
	double distance;
	distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return distance;
}