// Arithmetic Operations using switch statement.

# include <iostream>
using namespace std;
void main()
{
	char option;
	float num1, num2;

	cout << "Enter first No : ";
	cin >> num1;
	cout << "Enter Second No : ";
	cin >> num2;

	cout << "Enter operator either :  + , - , * , /  = ";
	cin >> option;

	switch (option)
	{
	case '+':
		cout <<"Addition is : "<< num1 + num2<<endl;
		break;

	case '-':
		cout <<"Subtraction is : "<< num1 - num2<<endl;
		break;

	case '*':
		cout <<"Multiplication is : "<< num1 * num2<<endl;
		break;

	case '/':
		cout <<"Division is : "<< num1 / num2<<endl;
		break;

	default:
		cout << "Invalid Input"<<endl;
		break;
	}	
}