#include <bits/stdc++.h>
using namespace std;

class Solution{
    
    int mod = 1000000007;
	public:
	
	int count(int arr[], int n, int sum )
	{
	    long long t[n+1][sum+1];
	    memset(t,0,sizeof(t));          //for first row
        for(int i =0 ; i<= n; i++){     //for first column
            t[i][0] = 1;
        }
        
        for(int i = 1; i<= n; i++)
        {
            for(int j =1; j<= sum; j++)
            {
                if(arr[i-1]<= j)
                    t[i][j] = ((t[i-1][j - arr[i-1]]) + (t[i-1][j]));
                else
                    t[i][j] = t[i-1][j];
            }
        }
        
        return t[n][sum];
	        
	}
	
	int perfectSum(int arr[], int n, int sum)
	{
        return count(arr,n,sum);
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
