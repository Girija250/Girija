#include<iostream>
using namespace std;
int main()
{
	float n1,n2;
	float sum,diff,product,quotient;
	cout<<"Enter two numbers"<<endl;
	cin>>n1>>n2;
	sum=n1+n2;
	diff=n1-n2;
	product=n1*n2;
	quotient=n1/n2;
	
	cout<<"sum is ="<<sum<<endl;
	cout<<"Diff is ="<<diff<<endl;
	cout<<"Product is ="<<product<<endl;
	cout<<"Quotient is ="<<quotient<<endl;
	return 0;
}
