//      https://leetcode.com/problems/merge-intervals/              - success

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:

vector<vector<int>> merge(vector<vector<int>>& intervals)
{
    vector<vector<int>> original_intervals = intervals;
    int size = original_intervals.size();


    sort(original_intervals.begin(), original_intervals.end());             //original interal is now sorted

    vector<vector<int>> output_intervals;

    if( size == 0)                                     //no intevals are present
    {
        output_intervals.push_back({0,0});
        return output_intervals;
    }
    else if (size == 1 )                               //only one interval is present
    {   
        return original_intervals;
    }
    else
    {   
        output_intervals.push_back(original_intervals[0]);                  //inputting first value
        int o_itr = 0;
        
        for(auto it = 1 ; it <size; it++)               //running loop from second value of original intervals
        { 
            if(original_intervals[it][0] <= output_intervals[o_itr][1])                 //intercepting 
            {
                output_intervals[o_itr][1] = max(original_intervals[it][1],output_intervals[o_itr][1]);

            }
            else if( original_intervals[it][0] > output_intervals[o_itr][1])            //non- interceptin
            {
                output_intervals.push_back(original_intervals[it]);
                o_itr++;
            }  
        }
    }

    return output_intervals;
        
}


};