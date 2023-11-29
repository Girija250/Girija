#include<iostream>
using namespace std;
class student
{
	private:
		char name[50];
		int reg_no;
		int m1,m2;
		public:
			void read()
			{
				cout<<"enter the name"<<endl;
				cin>>name;
				cout<<"enter reg number"<<endl;
				cin>>reg_no;
				cout<<"enter marks"<<endl;
				cin>>m1>>m2;
			}
			void print();
};
void student::print()
{
	cout<<name<<endl;
	cout<<reg_no<<endl;
	cout<<m1<<endl<<m2<<endl;
}
int main()
{
	student s;
	s.read();
	s.print();
}
