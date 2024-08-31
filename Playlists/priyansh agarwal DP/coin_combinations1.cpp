#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007; 

int main()
{   
    // speed for io operations else giving TLE
    cin.sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL); 

    int n,x;        // n is coins, x is sum
    cin>>n>>x;
 
    vector<int> coins(n);
    for(int i = 0; i<n;i++){
        cin>>coins[i];
    }    
 
    vector<int> dp(x+1);
    dp[0]=1;
 
    for(int i = 1; i<=x;i++){
        for(int j = 0; j<n;j++){
            if((i-coins[j])>=0){
                if(dp[i]+dp[i-coins[j]]>=mod)    dp[i]+=dp[i-coins[j]]-mod;
                else    dp[i]+=dp[i-coins[j]];
            } 
        } 
    }

    cout<<dp[x]<<"\n";
    return 0;
}