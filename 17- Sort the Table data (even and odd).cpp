/*
sorting of table data (firstly print even numbers than print odd numbers.
step1- sort the data
step2- find even and odd numbers from the data
step3- assign the values of even and odd numbers into another array
step4- display the output
*/


#include<iostream>
using namespace std;
void main()
{
	int a[4][4]={{1,97,2,6},{4,5,96,9},{8,33,16,13},{11,77,15,14}};
	int temp;

	//step1-sorting
	for(int k=0;k<16;k++)
	{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(j<3)
			{
				if(a[i][j]>a[i][j+1])
				{
					temp=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=temp;
				}

			}
			else if(j==3)
			{
				if(a[i][3]>a[i+1][0])
				{
					temp=a[i][3];
					a[i][3]=a[i+1][0];
					a[i+1][0]=temp;
				}
			}
		}
	}
	}

	//step2-finding even and odd numbers
	int even=0;
	int odd=0;
	int m,n;
	for(m=0;m<4;m++)
	{
		for(n=0;n<4;n++)
		{
			if(a[m][n]%2==0)
				even++;
			else
				odd++;
		}
	}
	cout<<"Even number "<<even<<endl;
	cout<<"Odd number "<<odd<<endl;

	//step3- placement of even and odd numbers into an array
	int e=0;
	int o=even;
	int b[16];
	for(m=0;m<4;m++)
	{
		for(n=0;n<4;n++)
		{
			if(a[m][n]%2==0)
			{
				b[e]=a[m][n];
				e++;
			}
			else
			{
				b[o]=a[m][n];
				o++;
			}
		}
	}

	//step4- output
	for(m=0;m<16;m++)
	{
		if(m%4==0)
			cout<<endl;
		cout<<b[m]<<" ";
	
	}
	cout<<endl;
}
