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

freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int cases;
cin>>cases;
int t = 1;

while((t++)<=cases)
{   
    int n,k;
    cin>>n>>k;
    string ans = "YES";
    bool flag = 0;

    if(n>k*2){
        ans = "NO";
        flag = 1;
    }
           
    //if any element's frequency is more than 2, it should return NO
    // input must be taken anyway even though we can return false whe n> 2k

    vi s;
    umii mp;
    
        fo(i,n){
            int temp;
            cin>>temp;
            s.pb(temp);

            mp[temp]++;
            if(mp[temp]>2)
                ans= "NO";
            
        }
    
    
    cout<<"Case #"<<t-1<<": "<<ans<<endl;


}

return 0;
}
