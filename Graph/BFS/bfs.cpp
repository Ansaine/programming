#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    
    // BFS doesnt need recursion just like level order traversal
    
    // 1st step - we visit -> means we put into queue
    // 2nd - we mark that we visit
    // 3rd - we explore -> that is we use the while function 
    //       while exploring, we use 1st and 2nd step.
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        queue<int> q;
        vector<int> visited(V+1,0);
        vector<int> result;
        
        q.push(0);
        visited[0] = 1;
        result.push_back(0);
        
        while(!q.empty())                       // while function is for exploration
        {
            int i = q.front();
            q.pop();
            visited[i] = 1;
            
            // Another way
            // for(int j = 0; j<adj[i].size(); j++)             
            // {
            //     if(visited[adj[i][j]] == 0)
            //     {   
            //         result.push_back(adj[i][j]);
            //         visited[adj[i][j]] = 1;
            //         q.push(adj[i][j]);
            //     }
            // }
            
            for(auto j: adj[i])
            {
                if(!visited[j])
                {
                    q.push(j);
                    visited[j] = 1;
                    result.push_back(j);
                }
            }
        }
        
        return result;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends