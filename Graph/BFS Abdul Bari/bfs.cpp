// We use index 1 here
// We need an array to store visited nodes
// We keep a queue to store which nodes to explore and pop the visited ones 

#include <iostream>
#include <queue>
#include <vector>
using namespace std;


void bfs( int i, int A[][8], int n)                 // ( starting node , adjacency matrix, number of nodes)
{
    queue<int> q;
    vector<int> visited(n+1,0);

    cout<<i<<" ";
    visited[i] = 1;
    q.push(i);

    while (!q.empty())
    {
        int temp_node = q.front(); q.pop();

        for(int j = 1; j<=n; j++)
        {
            if(A[temp_node][j] == 1 && visited[j]==0)           //vertex is connected to node j and not visited
            {
                cout<<j<<" ";
                visited[j] =1;
                q.push(j);
            }
        }
    }
    


}

int main()
{

int n = 8;
int A[8][8] = { {0, 0, 0, 0, 0, 0, 0, 0},
                {0, 0, 1, 1, 1, 0, 0, 0},
                {0, 1, 0, 1, 0, 0, 0, 0},
                {0, 1, 1, 0, 1, 1, 0, 0},
                {0, 1, 0, 1, 0, 1, 0, 0},
                {0, 0, 0, 1, 1, 0, 1, 1},
                {0, 0, 0, 0, 0, 1, 0, 0},
                {0, 0, 0, 0, 0, 1, 0, 0}    };

bfs(4,A,n);

return 0;

}