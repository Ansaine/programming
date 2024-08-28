

#include<bits/stdc++.h>
using namespace std;

long long mod = 1000000007;
int main()
{
    int n;
    cin>>n;  

    vector<int> base_cases = {1,2,4,8,16,32};
    if(n<=6){
        cout<<base_cases[n-1]<<endl;
    }    
    else{
        //base cases
        vector<long long> dp(n+1);
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        dp[4] = 8;
        dp[5] = 16;
        dp[6] = 32;

        for(int i = 7; i<=n;i++){
            int t = 6;
            long long sum = 0;        
            while(t){
                sum=(sum+dp[i-t])%mod;
                --t;
            }
            dp[i] = sum;
        }

        cout<<dp[n]<<endl;
    }
    return 0;
}
