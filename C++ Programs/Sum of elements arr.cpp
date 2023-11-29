#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,size,sum=0;
	cout<<"Enter number of elements"<<endl;
	cin>>size;
	cout<<"Enter elements"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	cout<<endl<<"Sum of elements is"<<sum;
	return 0;
}
