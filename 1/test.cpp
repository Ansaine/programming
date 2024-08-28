typedef long long ll;
#define mod 1e9+7
#define pb push_back
#define fo(i,n) 	for(int i = 0; i<n; i++)
#define fok(i,k,n) 	for(int i = k; i<n; i++)
#define umii unordered_map<int,int> 
#define mii map<int,int>
#define vi vector<int>
// #define int long long

#include<bits/stdc++.h>
using namespace std;

int recursive_sum(int i, int j, vector<int>& arr ){
    // 2 base cases - one for single arr element and other for double arr element
    if(j-i==1)  return arr[i]+arr[j];
    if(i==j)    return arr[i];

    int mid = i +(j-i)/2;
    return recursive_sum(i,mid,arr)+ recursive_sum(mid+1,j,arr);

}
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

vector<int> arr= {1,2,3,4};
int ans = recursive_sum(0,arr.size()-1,arr);
cout<<"sum is "<<ans<<endl;
return 0;
}