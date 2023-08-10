#include<bits/stdc++.h>
using namespace std;
    
    // error in recursive count function
    int scan(vector<vector<int>> &v,int i, int j, int r, int c, int level)
    {   
        if(i>=0 and i<r and j>=0 and j<c)
        {   
            if(level==1){
                return v[i][j];
            }
            else
            {
                int l = scan(v,i,j-1,r,c,1);
                int r = scan(v,i,j+1,r,c,1);
                int u = scan(v,i-1,j,r,c,1);
                int d = scan(v,i+1,j,r,c,1);
                int lu = scan(v,i-1,j-1,r,c,1);
                int ld = scan(v,i+1,j-1,r,c,1);
                int ru = scan(v,i-1,j+1,r,c,1);
                int rd = scan(v,i+1,j+1,r,c,1);
                
                int res = l + r + u + d + lu + ld + ru + rd;
                
                return res;               
            }
            
        }
         
        return 0;  
    }
    

int main()
{   
    vector<vector<int>>board = {    {0,1,0},
                                    {0,0,1},
                                    {1,1,1},
                                    {0,0,0},
                                };

    int r = board.size(), c = board[0].size();
        vector<vector<int>> vec( r , vector<int> (c, 0));
        
        for(int i = 0; i<r; i++)
        {
            for(int j =0; j<c;j++)
            {
                if( scan(board,i,j,r,c,0) == 2 or scan(board,i,j,r,c,0) == 3 )
                {   
                     vec[i][j] = 1;                   
                }

                cout<<vec[i][j]<<" ";              
                    
            }
            cout<<endl;
        }      
        
        


    return 0;
}