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

    string str1,str2;
    cin>>str1>>str2;

    for(int i =0; i<n; i++){
        if(str1[i] =='B')
            str1[i] = 'G';
    }

    for(int i =0; i<n; i++){
        if(str2[i] =='B')
            str2[i] = 'G';
    }
    
    if(str1 == str2)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";

}

return 0;
}
