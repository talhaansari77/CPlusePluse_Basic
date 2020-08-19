//Data Sorting of Table(order 5x5) using Pointers
#include<iostream>
using namespace std;
void main()
{
	int a[5][5]={{20,17,19,16,18},{24,25,21,23,22},{11,15,14,12,13},{9,8,7,6,10},{5,2,3,1,4}};
	int *b;
	int temp;
	for(int i=0;i<25;i++)//loop to repeat sorting mechanism
	{
		b=&a[0][0];
		for(int j=0;j<24;j++)
		{
			if(*b>*(b+1))
			{
				temp=*b;
				*b=*(b+1);
				*(b+1)=temp;
			}
			b++;
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
