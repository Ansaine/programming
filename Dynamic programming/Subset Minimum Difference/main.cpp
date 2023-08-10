#include<bits/stdc++.h>
using namespace std;

class Solution{

public:

vector<int> last_row;
    
int  diff(int arr[], int n, int sum, int range)
    {   
        int minimum = INT_MAX;
        int t[n+1][sum+1];
        memset(t,0,sizeof(t));          //for first row
        for(int i =0 ; i<= n; i++){     //for first column
            t[i][0] = 1;
        }
        
        for(int i = 1; i<= n; i++)
        {
            for(int j =1; j<= sum; j++)
            {
                if(arr[i-1]<= j)
                    t[i][j] = (t[i-1][j - arr[i-1]]) or (t[i-1][j]);
                else
                    t[i][j] = t[i-1][j];
            }
        }
        
    for(int j =0; j<= sum; j++)         //adding last row sizes to vector
    {
        if(t[n][j] == 1)
            last_row.push_back(j);
    }
    
    for(int j =0; j< last_row.size(); j++)
    {
        minimum = min( minimum, range - 2*last_row[j]);
    }
    
    return minimum;
        
        
}
  
 
    int minDifference(int arr[], int n)  { 
    
    int range = accumulate ( arr,arr + n, 0);
    return diff(arr,n, range/2, range);
    
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends