
typedef long long ll;
#define mod 1e9+7
#define pb push_back
// #define int long long - makes all int long long as we dont have much data restrictions

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
    int n;cin>>n;
    vector<int> v1,v2;

    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        v1.pb(temp);
    }

    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        v2.pb(temp);
    }

    string ans = "YES";
    int diff = INT_MAX;

    if(n==1 and v1[0]<v2[0]){
        cout<<"NO"<<"\n";
        goto final;
    }
        

    for(int i = 0 ; i<n; i++)
    {
        if(v2[i]==0)
            continue;
        else if(v1[i]<v2[i]){
            ans = "NO";
                break;
        }
        else if(diff==INT_MAX){
            diff = v1[i]-v2[i];
        }else{
            if( (v1[i]-v2[i])!= diff){
                ans = "NO";
                break;
            }
        }
    }

    
    cout<<ans<<"\n";
    final:
    ;
}

return 0;
}
