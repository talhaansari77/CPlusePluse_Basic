//Logical Gates (AND, OR, NOT)
#include<iostream>
using namespace std;
int and(int x,int y);
int or(int x,int y);
int not(int x);
void main()
{
	int a,b,operation;
	cout<<"enter 1st input (0,1)"<<endl;
	cin>>a;
	cout<<"enter 2nd input (0,1)"<<endl;
	cin>>b;
	cout<<"Press 1 for AND operation"<<endl;
	cout<<"Press 2 for OR operation"<<endl;
	cout<<"Press 3 for NOT operation"<<endl;
	cin>>operation;
	if(operation==1)
		cout<<and(a,b)<<endl;
	else if(operation==2)
		cout<<or(a,b)<<endl;
	else if(operation==3)
		cout<<not(a)<<endl;
	else
		cout<<"INVALID INPUT"<<endl;
}
int and(int x,int y)
{
	if(x==1 && y==1)
		return 1;
	else
		return 0;
}
int or(int x,int y)
{
	if(x==1 || y==1)
		return 1;
	else
		return 0;
}
int not(int x)
{
	if(x==1)
		return 0;
	else
		return 1;
}