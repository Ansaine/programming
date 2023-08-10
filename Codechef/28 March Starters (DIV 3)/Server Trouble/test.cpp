#include<bits/stdc++.h>
using namespace std;

int main()
{

typedef long long ll;
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;

while(t--)
{   
    ll n,k;             //n = locations k = servers
    cin>>n>>k;

    ll  optimal_distance;
    ll server_pairs;

    if( n%k == 0 )              //optimal distance
    {
        optimal_distance = n/k;
        server_pairs = k;
    }
    else
    {
        optimal_distance = n/k + 1;
        server_pairs = n - k*(n/k);
    }
    
    
    cout<<optimal_distance<<" "<<server_pairs<<"\n";
    
    
}

return 0;
}

