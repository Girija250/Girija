#include <iostream>
using namespace std;
int main()
{
  int a[5];
  cout << "Enter the 5 five numbers: ";
  for (int i = 0; i < 5; i++)
  {
    cin >> a[i];
  }
  int x,y;
  cout << "Enter the positions to be swapped: "; 
  cin >> x >> y;
  int temp;
  temp = a[x];
  a[x] = a[y];
  a[y] = temp;
  std::cout << "Elements after swapping are: ";
  for (int i=0;i<5;i++)
  {
    cout <<a[i]<< " ";
  }
  cout << endl;
  return 0;
}
