#include<bits/stdc++.h>
using namespace std;

stack<int> s;
	
	void dfs(int i, vector<int> adj[], int n)
	{
	    static vector<int> visited(n,0);
	    
	    if(visited[i]==0)
	    {
	        visited[i] = 1;
	        for(auto it = adj[i].begin(); it!=adj[i].end(); it++)
	        {
	            if(*it ==1 and visited[*it] ==0)
	                dfs(*it,adj,n);
	        }
	        s.push(i);
	    }
	}
	
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    vector<int> result(v);
	    
	    dfs(0,adj,v);
	    
	    while(!s.empty())
	    {
	        result.push_back(s.top());
	        s.pop();
	    }
	    
	    return result;
	    
	}