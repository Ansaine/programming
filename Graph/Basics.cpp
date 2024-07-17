#include<bits/stdc++.h>
using namespace std;


// Edge list to adjacency list
// Edge list needs to be sorted first as a sorted edge list will give a sorted adjacency list
sort(edges.begin(),edges.end());
vector<vector<int>> graph(n);
for(vector<int> edge: edges){
    graph[edge[0]].push_back(edge[1]);
}


