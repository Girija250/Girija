#include<iostream>
using namespace std;
int main()
{
	int num,i,count=0;
	cout<<"Enter the number"<<endl;
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
			break;
		}
	}
		if(count==0)
		cout<<"It is prime number"<<endl;
		else
		cout<<"It is not prime number"<<endl;
		cout<<endl;
	
	return 0;
}
