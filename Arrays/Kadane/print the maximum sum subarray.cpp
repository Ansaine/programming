#include<bits/stdc++.h>
using namespace std;

pair<int,int> subarray(vector<int> nums){

        int n = nums.size();
        int mx = INT_MIN;
        int sum = 0;

        int start, end;

        for(int i =0; i<n; i++){
            sum+=nums[i];
            end = i;
            mx = max(sum,mx);

            if(sum<0){
                sum=0;
                start=i+1;
                end = i+1;
            }   
        }

        return {start,end};
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    pair<int,int> ans = subarray(nums);
    cout<<ans.first<<" "<<ans.second<<endl;

    return 0;

}
