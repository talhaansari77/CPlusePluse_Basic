//Data Sorting of Table(order 5x5) by converting array Data into 1-D array
#include<iostream>
using namespace std;
void main()
{
	int a[5][5]={{20,17,19,16,18},{24,25,21,23,22},{11,15,14,12,13},{9,8,7,6,10},{5,2,3,1,4}};
	int b[25];
	int k=0;
	int temp;


	//conversion of 2D array into 1D array
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			b[k]=a[i][j];
			k++;
		}
	}

	//sorting mechanism
	int m,n;
	for(n=0;n<25;n++)//loop to repeat sorting mechanism
	{
	for(m=0;m<24;m++)
	{
		if(b[m]>b[m+1])
		{
			temp=b[m];
			b[m]=b[m+1];
			b[m+1]=temp;
		}
	}
	}

	//To output sorted elements
	for(m=0;m<25;m++)
	{
		if(m%5==0 && m>1)
			cout<<endl;
			cout<<b[m]<<" ";
	}
	cout<<endl;
}

