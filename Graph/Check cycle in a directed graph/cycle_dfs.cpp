

#include <iostream>
#include <queue>
#include <vector>
using namespace std;


bool dfs_cycle( int i, int A[][5], int n)                 // ( starting node , adjacency matrix, number of nodes)
{
    static vector<int> visited(n+1,0);
    static vector<int> order(n+1,0);

    static bool result = 0;

    if(visited[i]==0)
    {
        cout<<i<<" ";
        visited[i] = 1;
        order[i] = 1;

        for(int j = 1; j<=n; j++)
        {
            if(A[i][j]==1)
            {
                if(visited[j]==0)
                {   
                order[j] = 1;
                dfs_cycle(j, A, n);
                order[j] = 0;
                }
                
            else if( visited[j]==1 && order[j]==1)
            {
                result = 1;
                break;
            }

            }        
            
        }

    }

    return result;
}

int main()
{

int n = 4;
int A[5][5] = { {0, 0, 0, 0, 0},
                {0, 0, 1, 0, 0},
                {0, 0, 0, 1, 0},
                {0, 0, 0, 0, 1},
                {0, 1, 0, 0, 0},
                                };

cout<< dfs_cycle(1,A,n);


return 0;

}