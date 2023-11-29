#include<iostream>
#include<sstream>
 using namespace std;
int countwords(const string&str)
{
  stringstream ss(str);
  string word;
  int count=0;
  while(ss>>word)
  {
    count++;
  }
return count;
}
int main()
{ 
   string str;
   cout<<endl<<"enter string";
   cin>>str;
int wordcount=countwords(str);
cout<<"The number of words is "<<wordcount<<endl;
return 0;
}
