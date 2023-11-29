#include<iostream>
using namespace std;
int main()
{
	int n,m,rem,sum=0;
	cout<<"Enter the number"<<endl;
	cin>>n;
	m=n;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem;
	}
	if(m%sum==0)
	{
		cout<<"It is harshad number"<<endl;
	}
	else
	{
		cout<<"It is not harshad number"<<endl;
	}
	return 0;
}
