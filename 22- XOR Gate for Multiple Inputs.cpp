//XOR gate for multiple inputs
#include<iostream>
using namespace std;
int xor(int a[5]);
void main()
{
	int a[5];
	cout<<"Enter 5 inputs (0,1)"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"output : "<<xor(a)<<endl;
}
int xor(int a[5])
{
	int count=0;
	for(int i=0;i<5;i++)
	{
		if(a[i]==1)
			count++;
	}
	if(count%2==1)
		return 1;
	else 
		return 0;
}