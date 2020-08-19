/*Marks-wise Sorting of Given Data

Reg#		Name		Marks
 1		Ahmed		5
 2		Bilal		9
 3		Ali		4
 4		Daud		10
 5		Umer		6

*/
#include<iostream>
using namespace std;
void main()
{
	int a[5][2]={{1,5},{2,9},{3,4},
		{4,10},{5,6}};
	int temp,temp1,z;
	char temp2;
	char b[5][10]={{'A','H','M','E','D'},
					{'B','I','L','A','L'},
					{'A','L','I'},
					{'D','A','U','D'},
					{'U','M','E','R'}};
	for(int j=0;j<4;j++)
	{
		for(int i=0;i<4;i++)
		{
			if(a[i][1]<a[i+1][1])
			{
				temp=a[i][1];
				a[i][1]=a[i+1][1];
				a[i+1][1]=temp;

				temp1=a[i][0];
				a[i][0]=a[i+1][0];
				a[i+1][0]=temp1;

				for(z=0;z<10;z++)
				{
					temp2=b[i][z];
					b[i][z]=b[i+1][z];
					b[i+1][z]=temp2;
				}
			}
		}
	}

	for(int k=0;k<5;k++)//rows
	{
		int count=0;
		for(int n=0;n<2;n++)//column
		{
			cout<<a[k][n]<<" ";
			if(count==0)
			{
				for(z=0;z<10;z++)
				{
					cout<<b[k][z];
				}
				count=count+1;
			}
			
		}
		cout<<endl;
	}
}