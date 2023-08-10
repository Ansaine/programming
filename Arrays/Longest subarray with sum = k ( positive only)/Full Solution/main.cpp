#include<bits/stdc++.h>
using namespace std;

// This is an optimisation of O(n2) algorithm using map - gfg

// subarray having sum k
int lenOfLongSubarr(vector<int> arr, int k)
{
 
    unordered_map<int, int> mp;     //sum index

    int n = arr.size();
    int sum = 0;
    int maxLen = 0;
 
    // traverse the given array
    for (int i = 0; i < n; i++) {
 
        // accumulate sum
        sum += arr[i];
 
        // when subarray starts from index '0'
        if (sum == k)
            maxLen = i + 1;
 
        // make entry for 'sum' if it is not present
        if (mp.find(sum) == mp.end())
            mp[sum] = i;
 
        // check if 'sum-k' is present in 'um'
        // or not
        if (mp.find(sum - k) != mp.end()) {
 
            // update maxLength
            if (maxLen < (i - mp[sum - k]))
                maxLen = i - mp[sum - k];
        }
    }
    
    return maxLen;
}