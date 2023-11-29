#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,max;
	cout<<"Enter three numbers"<<endl;
	cin>>n1>>n2>>n3;
	max=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
	cout<<"The maximum of three numbers is ="<<max<<endl;
	return 0;
}
