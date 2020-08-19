// Arithmetic Operations using characters

#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char option;
	cout << "Enter 1st No = ";
	cin >> a;
	cout << "Enter 2nd No = ";
	cin >> b;
	cout << "For Sum Press + \n" << "For Subtraction Press -\n" << "For Multiplication Press *\n" << "For Division Press /\n";
	cin >> option;
	if (option == '+')
	{
		cout << "Sum = " << a + b<<endl;
	}
	else if (option== '-')
	{
		cout << "Subtraction = " << a - b<<endl;
	}
	else if (option== '*')
	{
		cout << "Multiplication = " << a * b<<endl;
	}
	else if (option== '/')
	{
		cout << "Division = " << a / b<<endl;
	}
	else
	{
		cout << "Invalid Option ";
	}
}