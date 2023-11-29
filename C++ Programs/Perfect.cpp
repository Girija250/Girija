#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,i;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%1==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
		cout<<"It is perfect number"<<endl;
	else
		cout<<"It is not perfect number"<<endl;
	return 0;
}
