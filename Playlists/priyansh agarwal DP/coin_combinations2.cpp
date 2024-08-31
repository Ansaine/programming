
// Leetcode/Striver solution

#include<bits/stdc++.h>
using namespace std;

int const mod = 1000000007; 

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
 
    vector<vector<int>> dp(n+1,vector<int>(x+1,-1));
    // set base conditions 
    // 1st -> if(x==0)    return 1;        
    // 2nd -> if(n==0)    return 0;
    for(int i = 0; i<=n;i++){
        for(int j = 0; j<=x; j++){
            if(i==0)    dp[i][j]=0;
            if(j==0)    dp[i][j]=1;     // this condition will overwrite 1st if needed
        }
    } 

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=x; j++){
            if((j-coins[i-1])>=0) dp[i][j] =  (dp[i][j-coins[i-1]]+ dp[i-1][j])%mod;
            else dp[i][j] = dp[i-1][j];
        }
    }


    cout<<dp[n][x]<<"\n";

    return 0;
}