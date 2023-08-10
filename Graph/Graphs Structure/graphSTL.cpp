#include<bits/stdc++.h>
using namespace std;

#define N 5
// Taking N = 5
// Adjacency list representation

vector<int> adj[N];             // un weighted

vector<vector<pair<int,int>> adj // weighted graph
vector<pair<int,int>> adj[N];  ;


//Creating a graph when vertices and edges(integer pairs) are given

int v,e;

vector<vector<int>> graph(v);

for(int i =0; i<e;i++)
{
    int x,y;            // edge from x -> y , we use cin
    graph[x].push_back(y);
    graph[y].push_back(x);
}