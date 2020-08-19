//Data Sorting of Table(order 5x5) using 2-D array
#include<iostream>
using namespace std;
void main()
{
	int a[5][5]={{20,17,19,16,18},{24,25,21,23,22},{11,15,14,12,13},{9,8,7,6,10},{5,2,3,1,4}};
	int temp;
	for(int k=0;k<25;k++)//to repeat sorting mechanism
	{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(j<4)
			{
				if(a[i][j]>a[i][j+1])
				{
					temp=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=temp;
				}
			}
			else if(j==4 && i<4)
			{
				if(a[i][4]>a[i+1][0])
				{
					temp=a[i][4];
					a[i][4]=a[i+1][0];
					a[i+1][0]=temp;
				}
			}
		}
	}
	}


	//To output sorted elements
	for(int m=0;m<5;m++)
	{
		for(int n=0;n<5;n++)
		{
			cout<<a[m][n]<<" ";
		}
		cout<<endl;
	}
}

