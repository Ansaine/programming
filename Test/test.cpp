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

vector<int> prefix_queries(int n, vector<int> a, int q, vector<int> queries){

    vector<int> ans;
    
    //q queries
    for(int i = 0; i<q; i++){

        if(queries[i] == 1){
            rotate(a.begin(), a.begin()+a.size()-1, a.end());
        }
        else{

            int count  = 0;

            for(int i =0; i<n;i ++){
                if(a[i]==0)
                    break;
                else
                    count++;
            }

            ans.push_back(count);
        }
    }
    return ans;
}



return 0;
}