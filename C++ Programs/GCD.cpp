#include<iostream>
using namespace std;
int main()
{
	int n1,n2,gcd;
	cout<<"Enter two numbers"<<endl;
	cin>>n1>>n2;
	do
	{
		gcd=n1%n2;
		n1=n2;
		n2=gcd;
	}
	while(n2!=0);
	cout<<"The greatest common divisor is ="<<n1<<endl;
	return 0;
}
