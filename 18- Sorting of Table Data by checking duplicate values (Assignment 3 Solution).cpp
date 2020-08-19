//Solution of Assignment#3
/* Q#1: Write a C++ program which fills the data in a table of 4x4 by taking input from user.
Program should prompt an error in case of duplicate entry. After putting the data sort the
numbers in the table as given below.*/
#include<iostream>
#include<conio.h>
using namespace std;
void display(int a[16],int i,int j);
int duplicate(int a[16],int i,int temp);
void sorting(int a[16]);
void main()
{
	int a[16];
	int temp;
	int counter;
	for(int i=0;i<16;i++)
	{
value:
		cout<<"Enter the values for Table"<<endl;
		cin>>a[i];
		temp=a[i];
		counter=duplicate(a,i,temp);
		if(counter>0)
		{
			cout<<"ERROR!!! Value already exists"<<endl;
			goto value;
		}
		display(a,i,0);
	}
	cout<<"Sorted Table is "<<endl;
	sorting(a);
	cout<<endl;
}
void display(int a[16],int i,int j)
{
	
	if (j==0)
	{
		system("CLS");
		cout<<"Entered Values are"<<endl;
	}
	for(int m=0;m<=i;m++)
	{
		if(m%4==0 && m>0)
			cout<<endl;
		cout<<a[m]<<" ";
	}
	cout<<endl;
}
int duplicate(int a[16],int i,int temp)
{
	int counter=0;
	for(int m=0;m<i;m++)
	{
		if(temp==a[m])
			counter++;
	}
	return counter;
}
void sorting(int a[16])
{
	int temp;
	for(int m=0;m<16;m++)
	{
		for(int n=0;n<15;n++)
		{
			if(a[n]>a[n+1])
			{
				temp=a[n];
				a[n]=a[n+1];
				a[n+1]=temp;
			}
		}
	}
	display(a,15,1);
}