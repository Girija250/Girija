#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[]={10,20,30,40};
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=n-1;i>=0;i--)
	cout<<arr[i]<<" ";
	return 0;
}
