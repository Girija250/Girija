#include <iostream>
using namespace std;
int main() {
int n, i,arr[n],min,max,sec_max;
cout << "Enter number of elements in an array \n"; 
cin >> n;
 arr[n];
cout << "Enter values in an array \n";
for (i = 0; i < n; i++)
 { 
   cin >> arr[i];
}
   max=min;
   sec_max  = min;
for (i = 0; i < n; i++)
 { 
   if(arr[i] > max)
    {
     sec_max = max;
      max = arr[i];
}
if(arr[i] < max && arr[i] > sec_max)
 {
   sec_max = arr[i];
 }
}
cout << "Second highest number in an array is " << sec_max;
return 0;
}
