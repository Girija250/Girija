#include<iostream>
using namespace std;
int main()
{
	int i,fact=1,num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial of "<<num<<"is ="<<fact<<endl;
	return 0;
}
