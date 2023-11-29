#include <iostream>
using namespace std;

int main ()
{
    int i, n,sum = 0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i = 1; i < n; i++)
	 {
	  if(n % i == 0)
	   sum = sum + i;
	  } 
	  if(sum > n)
	{ 
        cout<< " It is an Abundant Number"<<endl; 
    }
  else
  {
    cout << n << " is not an Abundant Number\n"; 
  }
}
