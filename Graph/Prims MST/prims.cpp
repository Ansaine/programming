#include<bits/stdc++.h>
using namespace std;

// MST is Undirected weighted Graph
// We take pairs of input
// Brute force Approach - o(n2)


int main()
{

    int n,m;            //n nodes and m edges
    cin>>n>>m;           
    vector<pair<int,int>> adj[n];       //adjacency list

    for(int i = 0; i<m;i++)
    {
        int a,b,wt;
        cin>>a>>b>>wt;
        
        adj[a].push_back({b,wt});
        adj[b].push_back({a,wt});
    }

    vector<int> parent(n,-1);
    vector<int> key(n,INT_MAX);
    vector<bool> mst(n,0);

    key[0] = 0;

    for(int count = 0 ; count<n-1; count++)         //for n-1 edges
    {
        int mn = INT_MAX, index;

        for(int i =0; i<n ; i++){
        //minimum key not included in mst
            if(mst[i]== 0 and key[i]<mn){
                mn = key[i];
                index = i;
            }
        }

        mst[index] = 1;
    
    // checking adjacent nodes
        for(auto it: adj[index]){
            int node = it.first;
            int wt = it.second; 

            if(mst[node] == 0 and wt<key[node]){
                parent[node] = index;
                key[node] = wt;
            }
        }
    }

//printing MST
    for (int i =1; i<n; i++){
        cout<<parent[i]<<" - "<<i<<"\n";
    }
    
    return 0;
}