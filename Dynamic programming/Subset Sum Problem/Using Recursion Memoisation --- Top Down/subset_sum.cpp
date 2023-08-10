
#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    
    int dp[101][10001];
    
    bool knap(int n , int arr[], int sum)
    {   
        
    if(sum == 0)
        return dp[n][sum] = 1;
        
    if(n == 0)
        return dp[n][sum] = 0;
        
    if(dp[n][sum]!= -1)
        return dp[n][sum];
        
    if(arr[n-1]<= sum)
        return dp[n][sum] = ( knap(n-1,arr,sum-arr[n-1]) or knap(n-1,arr, sum) );
        
    else
        return  dp[n][sum] = knap(n-1,arr,sum);
        
    }

    bool isSubsetSum(int n, int arr[], int sum){
    memset(dp,-1,sizeof(dp));    
    return knap(n,arr,sum);
    
    
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
