#include<bits/stdc++.h>
using namespace std;

//here we consider 1 indexed nodes
int parent[100000];
int ranks[100000];

void makeset(int n)
{   
    for(int i =1; i<=n;i++)
    {
        parent[i] = i;
        ranks[i] = 0;
    }

}

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
    int n ;
    cin>>n;
    makeset(n);
    return 0;

}