#include<iostream>
#include<string>
using namespace std;
string reversestring(string s)
   {
     int n=s.length();
     for(int i=0;i<n/2;i++)
     {
     swap(s[i], s[n-i-1]);
     }
 return s;
}
int main()
{
  char str[40];
  cout<<"enter a string"<<endl;
  cin>>str;
  string reversed=reversestring(str);
  cout<<"reversed string"<<reversed<<endl;
return 0;
}
