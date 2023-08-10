#include <iostream>
#include <vector>

using namespace std;

void spiral_traversal(vector<vector<int>> v , int rows, int columns)
{   
    int top = 0, bottom = rows-1;
    int left = 0, right = columns -1 ;

    int direction = 0 ;                          // 0, 1 ,2, 3 will represent 4 directions

    while(top <= bottom && left<= right)
    {
        switch (direction)
        {
        case 0:
                for(int i = left ; i<= right; i++)
                {
                    cout<<v[top][i]<<" ";
                    
                }
                direction  = (direction +1) %4;
                top++;
                break;
        case 1:
                for(int i = top ; i<= bottom; i++)
                {
                    cout<<v[i][right]<<" ";                    
                }
                direction  = (direction +1) %4;
                right--;
                
            break;
        
        case 2:
                for(int i = right ; i>= left; i--)
                {
                    cout<<v[bottom][i]<<" ";
                    
                }
                direction  = (direction +1) %4;
                bottom--;
                
        case 3:
                for(int i = bottom ; i>= top; i--)
                {
                    cout<<v[i][left]<<" ";                    
                }
                direction  = (direction +1) %4;
                left++;
                
            break; 
        
        default:
            break;
        }
    }

}

int main()
{
    vector<vector<int>> v = { {1, 3, 6, 9},
                              {3, 6, 11, 12},
                              {12, 5, 3 ,12},
                              {19,23,22, 1}                         
                            };
                    
    spiral_traversal( v,4,4);
    
}