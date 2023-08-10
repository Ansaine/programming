#include<bits/stdc++.h>
using namespace std;


typedef pair<int,int> pii;
class Solution
{
	public:
	
    int spanningTree(int n, vector<vector<int>> adj[])
    {
       vector<int> key(n, INT_MAX);
       vector<bool> mst(n, false);
       vector<int> parent(n, -1);
       
       key[0] = 0;
       parent[0] = -1;
       priority_queue<pii,vector<pii>, greater<pii>> pq;
       
       pq.push({0,0});      //value index pairs
       
       for(int i = 0 ; i < n; i++){
           
        //   int mn= INT_MAX;
        //   int index;

        //   for(int i = 0 ; i < n ; i++){
        //       if(mst[i] == false && key[i] < mn){
        //           index = i;
        //           mn = key[i];
        //       }
        //   }
        
        int index = pq.top().second;
        pq.pop();

           mst[index] = true;
           

           for(auto it : adj[index]){
               int node = it[0]; 
               int wt = it[1]; 
               
               if(mst[node] == false && wt < key[node]){
                   pq.push({wt,node});
                   key[node] = wt;
                   parent[node] = index;
               }
           }
       }
       int sum = 0;
       for(auto it : key){
           sum += it;
       }
       return sum;
    }
};