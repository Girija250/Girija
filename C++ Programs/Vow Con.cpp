#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter the character"<<endl;
	cin>>c;
	if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	cout<<"It is vowel"<<endl;
	else
	cout<<"It is consonant"<<endl;
	return 0;
}
