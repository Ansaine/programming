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

    int ground[n], water[n];
    for(int i = 0 ;i<n; i++)
        cin>>ground[i];
    for(int i = 0 ;i<n; i++)
        cin>>water[i];

    vector<pair<int,int>> strength_index;
    for(int i =0; i<n; i++){
        strength_index.push_back({min(ground[i],water[i]),i});
    }

    sort(strength_index.begin(),strength_index.end());

    int mx = strength_index[n-1].first;
    int count = 0;

    for(auto x: strength_index){
        if(x.first == mx)
            count++;
    }

    cout<<count<<"\n";


    
}

return 0;
}
