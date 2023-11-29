#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,org_n,rem,sum=0,res=0;
  cout<<"Enter an integer"<<endl;
  cin>>n;
  org_n=n;
  while(org_n!=0)
  {
  	org_n/=10;
  	res++;
  }
  while(org_n!=0)
  {
  	rem=org_n%10;
  	sum+=pow(rem,res);
  	org_n/=10;
  }
  if(sum==org_n)
  cout<<"It is armstrong number"<<endl;
  else
  cout<<"It is not armstrong number"<<endl;
  return 0;	
}
