class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        vector<vector<int>> dir= {{0,-1}, {-1,0}, {0,1}, {1,0}};
        int r  = heights.size(), c = heights[0].size();
        vector<vector<int>> efforts (r,vector<int> (c,INT_MAX));
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({0,0,0});
        
        efforts[0][0] = 0;
                
        while(!pq.empty())
        {
            vector<int> head = pq.top();
            int x= head[1], y = head[2];
            int currentEffort = head[0];
            
            if(x==r and y==c)
                return currentEffort;
            
            for(int k = 0; k<4;k++){        //traversing all 4 directions
                int newX = x + dir[k];
                int newY = y + dir[k+1];
                
                if(newX>=0 and newX<r and newY>=0 and newY<c){
                    
                    int nextEffort = max(currentEffort,abs(heights[newX][newY] - heights[x][y] ));
                    
                    if(nextEffort<efforts[newX][newY]){
                        efforts[newX][newY] = nextEffort;
                        pq.push({nextEffort,newX,newY});
                    }
                }               
                 
            }               
            
        }
        
        return 0;
    }
};