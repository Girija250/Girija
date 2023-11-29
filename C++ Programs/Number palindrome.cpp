#include<iostream>
using namespace std;
int main()
{
	int n,num,rem,rev=0;
	cout<<"Enter the number"<<endl;
	cin>>num;
	n=num;
	do
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	while(num!=0);
	cout<<"Reverse is ="<<rev<<endl;
	if(rev==num)
	cout<<"It is palindrome"<<endl;
	else
	cout<<"It is not palindrome"<<endl;
	return 0;
}
