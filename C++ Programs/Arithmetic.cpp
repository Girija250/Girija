#include<iostream>
using namespace std;
int main()
{
	int x,y,sum,diff,product,modulo;
	float quotient;
	cout<<"Enter two numbers"<<endl;
	cin>>x>>y;
	sum=x+y;
	diff=x-y;
	product=x*y;
	modulo=x%y;
	quotient=(float)x/y;
	
	cout<<"Sum ="<<sum<<endl;
	cout<<"Difference ="<<diff<<endl;
	cout<<"Product ="<<product<<endl;
	cout<<"Modulo ="<<modulo<<endl;
	cout<<"Quotient ="<<quotient<<endl;
	
	return 0;
	
}
