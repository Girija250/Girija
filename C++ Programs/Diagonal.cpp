#include<iostream>
using namespace std;
int main()
{

int size,mat[size] [size],sum_left=0,sum_right=0;
 cout<<endl<<"Enter size of matrix";
  cin>>size;
cout<<endl<<"Enter elements of matrix";
 for(int i=0;i<size;i++)
 {
   for(int j=0;j<size;j++)
     {
       cin>>mat[i][j];
	   if(i==j)
         sum_left+=mat[i][j];
       if((i+j)==size-1)
	   sum_right+=mat[i][j];
     }
 }
 cout<<endl<<"Sum of left diagonal"<<sum_left;
 cout<<endl<<"Sum of right diagonal"<<sum_right;
 return 0;
}
