
#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    
    int dp[101][10001];                //dp[n][sum];
    
    bool solve(int n, int sum, int array[])
    {   
        if(sum == 0)
            return dp[n][sum] = 1;
        
        if(n==0)
            return dp[n][sum] = 0;
        
        if(dp[n][sum]!=-1)
            return dp[n][sum];
        
        if(array[n-1]<= sum) 
            return dp[n][sum] = ( solve(n-1,sum - array[n-1], array) or solve(n-1,sum,array) );
        else
            return dp[n][sum] = solve(n-1,sum,array);
        
    }
    
    int equalPartition(int N, int arr[])
    {   
        memset(dp,-1,sizeof(dp));
        int sum = accumulate(arr,arr+N,0);
        
        
        if(sum%2!=0)
            return 0;
        else
            return solve( N, sum/2, arr);
        
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}