#include<iostream>
using namespace std;
class largest
{
	private:
		int n1,n2,n3;
		public:
			void read()
			{
				cout<<"enter three numbers"<<endl;
				cin>>n1>>n2>>n3;
			}
			void print();
    };
void largest::print()
{
  if(n1>n2&&n1>n3)
  {
  	cout<<"n1 is largest"<<endl;
  }
  else if(n2>n1&&n2>n3)
  {
  	cout<<endl<<"n2 is largest";
  }
  else
  {
  	cout<<endl<<"n3 is largest";
  }
}
int main()
{
	largest l;
	l.read();
	l.print();
}
