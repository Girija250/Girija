#include<iostream>
using namespace std;
int main()
{
	int arr1[50],arr2[40],arrm[100];
	int size1,size2,i,k;
	cout<<"Enter size of both arrays"<<endl;
	cin>>size1>>size2;
	cout<<"Enter array 1 elements"<<endl;
	for(i=0;i<size1;i++)
	{
		cin>>arr1[i];
		arrm[i]=arr1[i];
	}
	k=i;
	cout<<"Enter array 2 elements"<<endl;
	for(i=0;i<size2;i++)
	{
		cin>>arr2[i];
		arrm[k]=arr2[i];
		k++;
	}
	cout<<"Merged array is "<<endl;
	for(i=0;i<k;i++)
	{
		cout<<arrm[i]<<" "<<endl;
	}
	return 0;
}
