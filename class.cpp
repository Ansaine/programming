#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

int value(string s)
{   
    int n = s.size()-1;
    int sum = 0;

    for(int i = 0, j = s.size()-1 ; j>=0; i++ , j--){

        bool val;

        if(s[j]=='0')
            val = 0;
        else 
            val = 1;

        sum+= val*pow(2,i);
    }

    return sum;
}


    int solve (int i , int k, string temp, string &s){

        if( i == -1){
            return temp.size();
        }

        string newtemp= s[i] + temp;          //will add to front part

        if(value(newtemp)<= k){
            
            int x = solve(i-1,k, newtemp,s);
            int y = solve(i-1,k, temp,s);

            return max(x,y);
        }
        else
            return solve(i-1,k, temp,s);

    }


    int longestSubsequence(string s, int k) {
        
        string temp = "";
        return solve(s.size()-1,k,temp,s);

    }
};