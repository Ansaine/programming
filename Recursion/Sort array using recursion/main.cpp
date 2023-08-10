#include<bits/stdc++.h>
using namespace std;

void insert( vector<int> &arr, int n)
{
    if(arr.size()==0 or arr[arr.size()-1]<= n) {              //array is empty or temp element is the largest
        arr.push_back(n);
        return;
    }

    int temp = arr[arr.size()-1];

    arr.pop_back();
    insert(arr,n);
    arr.push_back(temp);

}

void sort(vector<int> &arr)
{   
    if(arr.size()==1)
        return;

    int last = arr[arr.size()-1];
    arr.pop_back();
    sort(arr);
    insert(arr,last);
}

int main()
{

vector<int> arr = { 3,8, 2, 1, 9, 0};

sort(arr);

for(int i =0; i<=5; i++)
    cout<<arr[i]<<" ";

return 0;

}