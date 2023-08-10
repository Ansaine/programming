
typedef long long ll;
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
// #define int long long - makes all int long long as we dont have much data restrictions

#include<bits/stdc++.h>
using namespace std;


int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n;
cin>>n;

vi arr1(n,0) , arr2(n,0);

for(int i = 0; i<n; i++){
    int temp;
    cin>>temp;
    arr1[i] = temp;
}

int sum = accumulate(arr1.begin(),arr1.end(),0);

for(int i = 0 ; i< n; i++){
    
    if(i== n-1)
        arr2[i] = sum;
    else{

        arr2[i] = arr1[i] + 1;
        sum-= arr2[i];
    }
}

for(auto x: arr2)
    cout<<x<<" ";

return 0;
}
