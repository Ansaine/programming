#include<bits/stdc++.h>
using namespace std;


vector<int> parent,ranks;

// Find Parent works in 4α time complexity
int find_parent(int a)
{   
    if(a == parent[a])
        return a;
    else 
        return parent[a] = find_parent(parent[a]);      //path compresson
     // return find_parent(parent[a]);                  //without path compression

}

// union lower case is already present in library
void Union( int a, int b)
{   
    a = find_parent(a);
    b = find_parent(b);

    if(ranks[a]<ranks[b]){
        parent[a] = b;
    }
    else if(ranks[b]<ranks[a]){
        parent[b] = a;
    }else{                          //choose anyone to join to other
        parent[b] = a;
        ranks[a]++;
    }
}

int main()
{   
    int ans = 0;
    int n,m ;       //n nodes m edges
    cin>>n>>m;

    vector<vector<int>> edges;

    for(int i =0; i<m; i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({wt,u,v});
    }
    sort(edges.begin(),edges.end());

    //parent
    parent = vector<int> (n);
    for(int i = 0 ; i<n; i++){
        parent[i] = i;
    }

    //ranks
    ranks = vector<int> (n,0);

    //store the mst
    vector<pair<int,int>> mst;

    //greedy iteration
    for(auto it: edges){

        if(find_parent(it[1])!= find_parent(it[2])){
            ans+= it[0];
            mst.push_back({it[1],it[2]});
            Union(it[1],it[2]);
        }
    }


    cout<<ans<<"\n";

    return 0;

}