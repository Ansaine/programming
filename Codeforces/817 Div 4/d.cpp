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

ll count(string &str){

    int n = str.size();
    int i = n-1;
    ll sum = 0;

    while(i>=0){
        if(str[i]=='L')
            sum+=i;
        else
            sum+= n- i-1;

        i--;
    }

    return sum;
}

ll  solve(string str, int k){

    int i = 0;
    int j = str.size()-1;

    while(k>0 and i<j){
        if(str[i]=='L')
            str[i]='R',k--;
        i++;

        if(k>0){
            if(str[j]=='R')
                str[j] = 'L',k--;
        }
        j--;
    }
    return count(str);

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
    int n;
    cin>>n;

    string s;
    cin>>s;

    for(int i = 1; i<=n; i++){
        cout<<solve(s,i)<<" ";
    }

    cout<<"\n";
}

return 0;
}
