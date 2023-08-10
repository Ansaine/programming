typedef long long ll;
#define mod 1e9+7
#define pb push_back
#define fo(i,n) 	for(int i = 0; i<n; i++)
#define fok(i,k,n) 	for(int i = k; i<n; i++)
#define umii unordered_map<int,int> 
#define mii map<int,int>
#define vi vector<int>
// #define int long long

#include<bits/stdc++.h>
using namespace std;


int main()
{
    
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;

while(t--)
{   
    int n;
    cin>>n;

        unordered_map<char,int> mp;
        mp['T'] = 1;
        mp['i'] = 1;
        mp['m'] = 1;
        mp['u'] = 1;
        mp['r'] = 1;


        string s;
        cin>>s;

        if(n!=5)
            cout<<"NO"<<"\n";
        else{

        unordered_map<char,int> temp;
        for(auto x: s)
            temp[x]++;

        if(temp==mp)
            cout<<"YES"<<"\n";
        else    
            cout<<"NO"<<"\n";

        }

}

return 0;
}
