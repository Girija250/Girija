#include<iostream>
using namespace std;
int main()
{
	int size,i;
	int*arr=new int[size];
	cout<<"Enter size"<<endl;
	cin>>size;
	cout<<"Enter values of array"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Values in array are "<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
