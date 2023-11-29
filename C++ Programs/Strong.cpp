#include<iostream>
using namespace std;
int main()
{
int n,fact,rem,sum=0,temp,i;
cout<<"Enter the number"<<endl;
cin>>n;
temp=n;
while(n)
{
	i=1,fact=1;
	rem=n%10;
	while(i<=rem)
	{
		fact=fact*i;
		i++;
	}
	sum=sum+fact;
	n=n/10;
}
if(sum==temp)
cout<<"It is strong number"<<endl;
else
cout<<"It is not strong number"<<endl;
return 0;
}

