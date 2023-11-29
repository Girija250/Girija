#include <iostream>
using namespace std;

int main()
{
   int n,arr[n], i, pos;
    cout << " Enter the size of the array: ";
    cin >> n;
    cout <<"Enter the elements of the array:"<<endl;
    for(i=0; i<n; i++)
    {
        cin >> arr[i]; 
    }
    cout <<" The elements of the array before deletion are :"<<endl;
    for(i=0; i<n; i++)
    {
        cout << arr[i] << "  "; 
    }

    cout <<"Enter the position of the element to be deleted : "<<endl;
    cin >> pos;
    --pos;
    for (i = pos; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout <<"The elements of the array, after deletion are:"<<endl;
    for(i=0; i<n-1; i++)
    {
        cout << arr[i] << "  "; 
    }
    cout <<endl;
    return 0;
}

