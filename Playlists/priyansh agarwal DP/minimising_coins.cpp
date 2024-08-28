

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;        // n is coins, x is sum
    cin>>n>>x;

    vector<int> coins;
    vector<long> dp(1000001,-1);
    dp[0] = 0;

    int t = n;
    while(t--){
        int c;
        cin>>c;
        coins.push_back(c);
        dp[c] = 1;
    } 

    // dp[x] = number of coins needed to make sum x
    // dp[x] = min(1+dp[x-c1], 1+dp[x-c2], 1+dp[x-c3],....)
    // dp[x] = 1 + min(dp[x-ci])        where ci is the coins

    for(int i = 1; i<=x;i++){
        // pre-set values
        if(dp[i]!=-1)   continue;

        long mn = INT_MAX;
        for(auto c:coins){
            if(i-c>0){
                mn = min(mn,dp[i-c]);
            }
        }
        dp[i] = 1+mn; 
    } 

    if(dp[x]>=INT_MAX)  cout<<-1<<endl;
    else cout<<dp[x]<<endl;

    
    return 0;
}
