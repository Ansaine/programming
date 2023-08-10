#include<bits/stdc++.h>
using namespace std;


// Here the store vector is acting as a queue, tried using queue itself and its working

void sort( vector<int> &arr)
{
    static vector<int> store;

    if(arr.size() == 0)
        return;

    int last = arr[arr.size()-1];
    store.push_back(last);
    arr.pop_back();

    // 
    sort(arr);
    //

    arr.push_back(store.front());
    store.erase(store.begin());


}

int main()
{

vector<int> arr = { 3,8, 2, 1, 9, 0};

sort(arr);

for(int i =0; i<=5; i++)
    cout<<arr[i]<<" ";

return 0;

}