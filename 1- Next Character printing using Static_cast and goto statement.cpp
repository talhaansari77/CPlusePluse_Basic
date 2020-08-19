// Print next Chracter using Static cast
#include<iostream>
using namespace std;
void main()
{
	char value;
	int a;
	c:
	cout << "enter any chracter = ";
	cin >> value;
	a=static_cast<int>(value);
	a = a+1;
	cout << "Next Chracter is = " << static_cast<char>(a)<<endl;
	goto c;
}