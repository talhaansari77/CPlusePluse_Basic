//	Power of a number using user-defined function
#include<iostream>
using namespace std;
void power(int x, int y);
int main()
{
	int num, exp;
	cout << "enter any number : ";
	cin >> num;
	cout << "enter any exponent : ";
	cin >> exp;
	power(num, exp);
}
void power(int x, int y)
{
	int c = 1;
	for (int i = 0; i < y; i++)
	{
		c = c * x;
	}
	cout << "Answer is : " << c << endl;
}