#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j;
	cout<<"Enter no of rows and columns"<<endl;
	cin>>row>>col;
	int**arr=new int*[row];
	for(i=0;i<row;i++)
	{
		arr[i]=new int [col];
	}
	cout<<"Enter values"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Values in 2 D arry are"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
