#include<bits/stdc++.h>
using namespace std;

int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;

while(t--)
{
    int n;
    cin>>n;

    vector<int> arr(n);
    vector<int> arr2(n);

    for(int i =0 ; i<n; i++)
    {
        cin>>arr[i];
        arr2[i] = arr[i];
    }

    sort(arr2.begin(), arr2.end());

    if(arr2 != arr)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}

return 0;
}
