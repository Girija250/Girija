#include<iostream>
#include<string>
using namespace std;
 bool ispalindrome(string str)
 {
   int left=0;
   int right=str.length()-1;
   while(left<right)
   {
    if(str[left]!=str[right])
    return false;
    left++;
    right--;
   }
 return true;
}
int main()
{
  string inputstring="madam";
  bool result=ispalindrome(inputstring);
  if(result)
    cout<<endl<<"string is palindrome";
	else
   cout<<endl<<"string is not palindrome";
   return 0;
}
