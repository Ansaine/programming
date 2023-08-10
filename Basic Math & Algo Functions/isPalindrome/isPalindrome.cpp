#include<bits/stdc++.h>
using namespace std;

bool isPalindrome( string s,int i, int j)
{   
    if( i>=j )
        return 1;
        
    while(i<j)
    {
        if(s[i]!=s[j])
            return 0;
        
        i++;j--;
    }
    return 1;
}