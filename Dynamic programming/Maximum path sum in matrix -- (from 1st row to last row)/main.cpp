//https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        for( int i = 1 ; i< N; i++)                 //we start from the 2nd row
        {
            for( int j = 0 ; j< N; j++)
            {
                if( j>0 && j< N-1)                  //for middle elements
                {
                    Matrix[i][j] += max( {Matrix[i-1][j-1],Matrix[i-1][j],Matrix[i-1][j+1]});
                }
                else if ( j == 0)                   // for left column
                {
                    Matrix[i][j] += max( Matrix[i-1][j],Matrix[i-1][j+1]);
                }
                else if ( j == N-1)                 // for right column
                {
                    Matrix[i][j] += max( Matrix[i-1][j-1],Matrix[i-1][j]);
                }
            }
        }

        int answer= 0;

        for( int j = 0; j<N; j++)                   //last row max value
        {
            answer = max( answer, Matrix[N-1][j]);
        }

        return answer;
    }
};




int main(){
    
        int N;
        cin>>N;

        vector<vector<int>> Matrix(N, vector<int>(N, 0));           //2D matrix declaration

        for(int i = 0;i < N*N;i++)
            cin>>Matrix[i/N][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    
    return 0;
}