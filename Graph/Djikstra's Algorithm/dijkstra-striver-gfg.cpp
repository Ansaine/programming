#include<bits/stdc++.h>
using namespace std;
    
    // Not applicable to negative weight cycles
	// priority queue should be MINIMUM PQ
	// Here, Adjacency list is given as  0 ->(node,dist), (node,dist) , (node,dist)
	//                                   1 ->(node,dist), (node,dist)
	// S is the starting node
    // we take a distance array calculating all distances from starting node
    //      --this is like a visited array as it decides whether to go to a node or not
	// total node/vertices = V or adj.size()
	// we declare 1-indexed visited and distance vectors so 1 extra space
	


//gfg requires to return the whole distance array
vector <int> dijkstra(int v, vector<vector<int>> adj[], int start, int end)
    {     
    using pii = pair<int,int> ;
    priority_queue<pii , vector<pii>, greater<pii>> pq;        // distance, node
    vector<int> dist(v,INT_MAX);      // distance array
    
    dist[start] = 0;
    pq.push({0,start});
    
    while(!pq.empty())
    {
        int node = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        
        if(d> dist[node])   continue;
        
        for(auto it : adj[node])
        {
            // gfg has node-distance pairs
            int adjNode = it[0];
            int adjNodeDist = it[1];
            
            if(dist[node] + adjNodeDist < dist[adjNode])
            {
                dist[adjNode] = dist[node]+ adjNodeDist;
                pq.push({adjNodeDist,adjNode});
            }
        }
    }
    
    return dist;

    }


// using Set
// stores in ascending order
// if a better distance is found other distance can be removed

vector <int> dijkstra(int v, vector<vector<int>> adj[], int s)
{
    using pii = pair<int,int> ;
    set<pii> st;        // distance, node
    vector<int> dist(v,INT_MAX);      // distance array
    
    dist[s] = 0;
    st.insert({0,s});
    
    while(!st.empty())
    {
        auto it = *st.begin();
        int node = it.second;
        int d = it.first;
        st.erase(it);
        
        if(d> dist[node])   continue;
        
        for(auto j : adj[node])
        {
            int newnode = j[0];
            int newdist = j[1];
            
            if(dist[node] + newdist < dist[newnode])
            {
                dist[newnode] = dist[node]+ newdist;
                st.insert({newdist,newnode});
                
                if(dist[node]!=INT_MAX)
                    st.erase({dist[node],node});
            }
            
        }
        
    }
    
    return dist;
}


