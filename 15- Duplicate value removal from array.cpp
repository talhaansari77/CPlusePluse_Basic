//removal duplicate values from array 
#include<iostream>
using namespace std;
void main()
{
	int a[8]={1,2,3,3,4,1,2,1};
	int b[8]={0,0,0,0,0,0,0,0};
	b[0]=a[0];
	for(int i=1;i<8;i++)
	{
		int counter=0;
		for(int j=0;j<i;j++)
		{
			if(a[i]==b[j])
				counter++;
		}
		if(counter>0)
			b[i]=0;
		else
			b[i]=a[i];
	}
	for(int k=0;k<8;k++)
	{
		if(b[k]!=0)
			cout<<b[k]<<" ";
	}
	cout<<endl;
}