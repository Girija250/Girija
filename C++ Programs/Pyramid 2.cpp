#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a=0;
	cout<<"Enter rows"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			++a;
			cout<<a;
		}
		a--;
		for(j=1;j<i;j++)
		{
			cout<<a;
			a--;
		}
		cout<<endl;
		a++;
	}
	return 0;
}
