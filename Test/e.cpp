typedef long long ll;
#define mod 1000000007
#define pb push_back
#define fo(i,n) 	for(int i = 0; i<n; i++)
#define fok(i,k,n) 	for(int i = k; i<n; i++)
#define umii unordered_map<int,int> 
#define mii map<int,int>
#define vi vector<int>
// #define int long long

#include<bits/stdc++.h>
using namespace std;

unordered_set<int> st;

void recur(int n, int k, unordered_map<int,int> &inserted ,map<pair<int,int>, int> &dp){
    
    if(dp[{n,k}] == 1)
        return;
        
    if(k==0){ 

        if(inserted[n]!=1){
            st.insert(n);
            inserted[n] = 1;
        }
        return;
    }
    else{

        for(int i = 1; i<=n; i++)
            if(n%i==0){
                recur(i*n,k-1,inserted,dp);
                dp[{i*n,k-1}] = 1;
            }
        return;          
    }
}


int main()
{
    
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;

while(t--)
{   
    st.clear();

    unordered_map<int,int> inserted;
    map<pair<int,int>,int> dp;

    int n,k;
    cin>>n>>k;

    recur(n,k,inserted,dp);
    cout<<accumulate(st.begin(),st.end(),0)%mod<<"\n";
}

return 0;
}
