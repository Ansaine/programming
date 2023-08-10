#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    
int dp[1001][1001];                 // [n][weight]
    
int knapSack(int W, int wt[], int val[], int n) 
{   
    // base case initialisation
    memset(dp,0,sizeof(dp));
    
    int i =1 ,j =1 ;
        
        for( i =1 ; i <=n; i++)             
        {
            for(j =1 ; j <=W; j++)
            {   
                if( j>= wt[i-1] )
                {
                    dp[i][j] = max( val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);   
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
    return dp[n][W];                // dp[i][j] gives error idk why!!!
}

};

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