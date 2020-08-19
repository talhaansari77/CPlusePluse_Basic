//Dynamic array initialization by using pointers
#include<iostream>
using namespace std;
void main()
{
	int a;
	cout<<"Enter size of array"<<endl;
	cin>>a;
	int *b;
	b=new int[a];       //this line will allocate the dynamic memory according to the user input
	
	//data input in array
	cout<<"enter "<<a<<" element for array"<<endl;
	for(int i=0;i<a;i++)
	{
		cin>>*(b+i);
	}

	delete [] b; //this command will deallocate the memory locations and you will see garbage values in output

	//data output
	for(int j=0;j<a;j++)
	{
		cout<<b[j]<<" ";
	}

	cout<<endl;
}

