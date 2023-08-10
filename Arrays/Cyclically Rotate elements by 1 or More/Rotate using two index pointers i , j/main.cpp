#include <bits/stdc++.h>
using namespace std;

 
void rotate(vector<int> &arr, int n)
{
    int i = 0;                      // i points to first and j points to last element
    int j = n-1;    

    while(i != j)
    {
      swap(arr[i], arr[j]);
      i++;
    }
}
 
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
     
    rotate(arr, arr.size());
 
    cout << "\nRotated array is\n";

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
 
    return 0;
}