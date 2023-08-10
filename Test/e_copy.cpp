typedef long long ll;
#define mod 1000000007
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
    int n,k;
    cin>>n>>k;

    if(n==1)
        cout<<1<<"\n";
    else{

        ll val = n;;
        for(int i =0; i<k; ++i){
            val = pow(val,n);
        }

        ll sum = 0;
        for(int i = n; i<=val; i++){
            if(val%i==0)
                sum+=i;
        }

        cout<<sum<<"\n";

    }

}

return 0;
}
