#include<iostream>
using namespace std;
int getmin(int arr[],int n)
{
  int res=arr[0];
  for(int i=1; i<n;i++) 
  res=min(res,arr[i]);
return res;
}
int getmax(int arr[], int n)
{
  int res=arr[0];
  for(int i=1;i<n;i++)
  res=max(res,arr[i]);
return res;
}
int main()
{
  int arr[]={12,1234,45,67,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<endl<<"minimum element is"<<getmin(arr,n)<<" ";
  cout<<endl<<"maximum element is"<<getmax(arr,n)<<" ";
  return 0;
}
