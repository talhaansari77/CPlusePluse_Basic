//User-defined function to print Table of a number
#include<iostream>
using namespace std;
void table(int y);
void main()
{
	int a;
	cout<<"Enter the number for Table"<<endl;
	cin>>a;
	table(a);
}
void table(int y)
{
	for(int i=1;i<=10;i++)
	{
		cout<<y<<" * "<<i<<" = "<< y*i<<endl;
	}
}