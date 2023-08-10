#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int max_profit =0;
    int min = prices[0];
    int n = prices.size();

    for(int i =0; i<n; i++)
    {
        if(prices[i]<min)
            min = prices[i];
        if( (prices[i] - min) > max_profit)
            max_profit = (prices[i] - min);
    }

    return max_profit;

        
    }
};