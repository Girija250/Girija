#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number"<<endl;
  cin>>num;
  (num%3==0)?cout<<"It is divisible by 3":cout<<"It is not divisible by 3"<<endl;
  return 0;
}
