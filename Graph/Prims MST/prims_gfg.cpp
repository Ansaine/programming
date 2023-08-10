#include<bits/stdc++.h>
using namespace std;


int spanningTree(int V, vector<vector<int>> adj[])
   {

       vector<int> key(V, INT_MAX);
       vector<bool> mst(V, false);
       vector<int> parent(V, -1);
       
       key[0] = 0;
       parent[0] = -1;
       
       for(int i = 0 ; i < V ; i++){
           int mn= INT_MAX;
           int index;

           for(int i = 0 ; i < V ; i++){
               if(mst[i] == false && key[i] < mn){
                   index = i;
                   mn = key[i];
               }
           }

           mst[index] = true;
           

           for(auto it : adj[index]){
               int node = it[0]; 
               int wt = it[1];

               if(mst[node] == false && wt < key[node]){
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