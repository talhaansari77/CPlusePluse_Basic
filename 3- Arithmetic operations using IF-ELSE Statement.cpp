// Arithmetic Operations

#include<iostream>
using namespace std;
int main()
{
	int a, b, option;
	cout << "Enter 1st No = ";
	cin >> a;
	cout << "Enter 2nd No = ";
	cin >> b;
	cout << "What do you want to do ?"<< endl;
	cout << "For Addition Press 1 " << endl;
	cout << "For Subtration Press 2" << endl;
	cout << "For Multiplication Press 3" << endl;
	cout << "For Division Press 4" << endl;
	cin >> option;
	cout << endl;
	if (option == 1)
	{
		cout <<"Addition : "<< a + b << endl;
	}
	else if (option == 2)
	{
		cout <<"Subtraction : "<< a - b << endl;
	}
	else if (option == 3)
	{
		cout << "Multiplication : "<< a * b << endl;
	}
	else if (option == 4)
	{
		cout <<"Division : "<< a / b << endl;
	}
	else
	{
		cout << "Invalid Input";
	}

}