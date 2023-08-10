
// We use index 1 here
// We use recursion as a stack to store visited nodes

#include <iostream>
#include <queue>
#include <vector>
using namespace std;


void dfs( int i, int A[][8], int n)                 // ( starting node , adjacency matrix, number of nodes)
{
    static vector<int> visited(n+1,0);

    if(visited[i]==0)
    {
        cout<<i<<" ";
        visited[i] = 1;

        for(int j = 1; j<=n; j++)
        {
            if(A[i][j]==1 && visited[j]== 0)        //connected node and not visited, then
            {
                dfs(j, A, n);
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

dfs(2,A,n);

return 0;

}