#include<iostream>
using namespace std;
float celsiustofahrenheit(float c)
{
	return (9*c)/5+32;
}
int main()
{
	float c;
	cout<<"Enter temperature in celsius"<<endl;
	cin>>c;
	float f=celsiustofahrenheit(c);
	cout<<"Temperature in fahrenheit is"<<"="<<f<<endl;
	return 0;
}
