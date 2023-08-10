
// Time taken in gfg - 0.2 secs

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    int dp[1001][1001];                 // [weight][n];
    
    int solve_knap(int W, int wt[], int val[], int n)
    {
        if(W==0 or n ==0)
            return 0;
            
        if(dp[W][n]!= -1)
            return dp[W][n];
        
        if(W>= wt[n-1])
            return dp[W][n] = max(val[n-1] + solve_knap(W-wt[n-1],wt,val,n-1), solve_knap(W,wt,val,n-1));
        
        else if(wt[n-1]>W) 
            return dp[W][n] = solve_knap(W,wt,val,n-1);
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       memset(dp,-1,sizeof(dp));
       return solve_knap(W,wt,val,n);
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends