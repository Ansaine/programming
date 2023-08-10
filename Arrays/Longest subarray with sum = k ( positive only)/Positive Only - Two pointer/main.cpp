#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    //IMP - We cant change the array 
    //Aditya Verma method wont work for negative numbers
    
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        int i =0, j = 0;
        int len = 0;
        int sum = 0;
        
        while(i<n and j<n)
        {   
            sum+= a[j];
            
            if(sum < k)
                j++;
                
            else if( sum>k){
                
                while(sum>k){
                    sum-=a[i];
                    i++;
                }
                
                if(sum==k){
                    len = max(len,j-i+1);
                }
                
                j++;
                
                
            }
            
            else{
                len = max(len,j-i+1);
                j++;
            }
        }
        
        return len;
    } 

};