//Multiple Input and output options for an array
#include<iostream>
using namespace std;
void main()
{
	int arr[5];
	int option,i;
	int counter=0;
xyz:
	cout<<"press 1, input"<<endl;
	cout<<"press 2, output"<<endl;
	cout<<"press 3, reverse"<<endl;
	cout<<"press 4, to multiply data by 3"<<endl;
	cout<<"press 5, addition"<<endl;
	cin>>option;
	if(option==1)
		//input
	{
		cout<<"Enter the values of array"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>arr[i];
		}
		counter=counter+1;
	}
	else if(option==2)
	{
		if(counter==0)
		{
			cout<<"Firstly enter the array data"<<endl;
			goto xyz;
		}
	   //output
		for(i=0;i<5;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	else if(option==3)
	{
		if(counter==0)
		{
			cout<<"Firstly enter the array data"<<endl;
			goto xyz;
		}
	   //output
		for(i=4;i>=0;i--)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	else if(option==4)
	{
		if(counter==0)
		{
			cout<<"Firstly enter the array data"<<endl;
			goto xyz;
		}
	   //output
		for(i=0;i<5;i++)
		{
			cout<<arr[i]*3<<" ";
		}
		cout<<endl;
	}
	else if(option==5)
	{
		if(counter==0)
		{
			cout<<"Firstly enter the array data"<<endl;
			goto xyz;
		}
	   //output
		int sum=0;
		for(i=0;i<5;i++)
		{
			sum=sum+arr[i];
		}
		cout<<"sum is: "<<sum<<endl;
	}
	else
	   cout<<"Invalid Option"<<endl;

	goto xyz;
}