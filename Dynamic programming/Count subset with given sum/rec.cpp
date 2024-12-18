#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	long long  mod = 1e9 + 7;
	
	int dp[1001][1001];
	
	int knap(int arr[], int n, int sum )
	{
	    if(sum == 0)
	        return dp[n][sum] = 1;
	    if(n==0)
	        return dp[n][sum] = 0;
        
        if(dp[n][sum]!= -1)
            return dp[n][sum]%mod;
        
        if(arr[n-1]<= sum)
            return dp[n][sum] = (knap(arr,n-1,sum - arr[n-1])%mod + knap(arr,n-1,sum)%mod)%mod;
        else
            return dp[n][sum] = knap(arr,n-1,sum)%mod;
	        
	}
	
	int perfectSum(int arr[], int n, int sum)
	{
        memset(dp,-1, sizeof(dp));
        return knap(arr,n,sum)%mod;
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends