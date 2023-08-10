
typedef long long ll;
#define mod 1e9+7
#define pb push_back
// #define int long long - makes all int long long as we dont have much data restrictions

#include<bits/stdc++.h>
using namespace std;


bool canPlace(vector<int> &v, int diff , int cows)
{   
    int n = v.size(), count = 1;
    int start = v[0];


    for(int i = 1; i<n; i++){

        if( (v[i]-start) >= diff){
            count++;
            start = v[i];
        }

        if(count==cows)
            return 1;
            
    }

    return 0;
}

int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;

while(t--)
{   
    int n,cows;     //n stalls
    cin>>n>>cows;
    int ans = 1;

    vector<int> v;
    for(int i= 0; i<n;i++){       
       int temp;
       cin>>temp;
       v.pb(temp); 
    }

    sort(v.begin(),v.end());

    //low and high tells minimum distance
    int l = 1, h = v[n-1] - v[0];

    while(l<=h)
    {
        int mid = (h+l)/2;

        if(canPlace(v,mid,cows)){
            l = mid+1;
            ans = mid;
        }else{
            h = mid - 1;
        }
    }

    cout<<ans<<"\n";
}

return 0;
}
