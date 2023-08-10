#include<bits/stdc++.h>
using namespace std;

string rfunc(string str)
    {
        int len = str.length();
        unordered_map<char,int> m;
        int max = 0;
        
        for(int i =0; i<len ; i++)
        {
            m[str[i]]++;
            
            if(m[str[i]]> max){
                max = m[str[i]];
            }
        }
        
        if(max<= ( len - max +1))
        {
            return "1";
        }
        else
            return "0";
        
        
    }
    
int main()
{
    string s = "geeksforgeeks";
    cout<<rfunc(s);
}