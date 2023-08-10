
#include<bits/stdc++.h> 
using namespace std; 


class Solution{   
public:
    
    int t[101][10001];                         // take t as int as we cant use memset -1 with bool dp
    
    bool knap(int arr[], int n, int sum)
    {   
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
        
        return t[n][sum];
    }

    bool isSubsetSum(int n, int arr[], int sum){
        
    memset(t,0,sizeof(t));        //for first row
    
    for(int i =0 ; i<= n; i++){     //for first column
        t[i][0] = 1;
    }
    
    return knap(arr,n, sum);
    
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
