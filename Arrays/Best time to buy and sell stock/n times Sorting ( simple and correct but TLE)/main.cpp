#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

    vector<int> temp = prices;
    int max_profit = 0;
    int n = prices.size();

    for(int i =0; i<n -1 ; i++)
    {
        temp = prices;              // resetting the temp array

        sort(temp.begin() + i,temp.end());
        if((temp[n-1]- prices[i]) > max_profit)
        {
            max_profit = temp[n-1]- prices[i];
        }
    }

    return max_profit;

        
    }
};