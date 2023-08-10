class Solution {
public:
    int lengthOfLIS(vector<int>& nums)
    {
        vector<int> lis( nums.size(),1);            //all values are 1
        
        for(int i =1 ; i< nums.size(); i++)
        {
            for(int j = 0 ; j<= i; j++)
            {
                if(nums[j]<nums[i])
                {
                    if(lis[j]>= lis[i])
                        lis[i] = 1 + lis[j];
                }
            }
        }
        
        return *max_element(lis.begin(),lis.end());
        
    }
};