
// Striver implementation
#include<bits/stdc++.h>
using namespace std;

class NumArray {
private:

int SIZE;
vector<int> seg;
vector<int> arr;

public:
    void sumBuild(int i, int l, int r){
        if(l==r){
            seg[i] = arr[l];
            return;
        }
        int mid = l+(r-l)/2;
        sumBuild(2*i+1,l,mid);
        sumBuild(2*i+2,mid+1,r);

        // backtracking - range query may be max query or sometimes sum query. Adjust accordinly
        seg[i]= seg[2*i+1]+seg[2*i+2];
    }

    // l,r are segment ranges and low,high are given range
    int sumQuery(int i, int l, int r, int low, int high){
    
    if(low<=l and r<=high)  return seg[i];  //  case 1 - segment completely inside bounds
    if(r<low or high<l) return 0;           //  case 2 - given range completely outside segment range

    int mid = l + (r-l)/2;                  //  case 3 - partial overlap
    int left = sumQuery(2*i+1,l,mid,low,high);
    int right = sumQuery(2*i+2,mid+1,r,low,high);

    return left+right;
}

    void updateQuery(int idx, int val, int i, int l, int r){

        if(l==r and l==idx){
            arr[idx] = val;
            seg[i] = val;
            return;
        }

        int mid = l+(r-l)/2;
        if(idx<=mid)    updateQuery(idx,val,2*i+1,l,mid);
        else            updateQuery(idx,val,2*i+2,mid+1,r);

        //backtracking - choose max or sum query
        seg[i]= seg[2*i+1]+seg[2*i+2];

    }

    // constructor
    NumArray(vector<int>& nums) {
        SIZE = nums.size();
        seg = vector<int>(4*SIZE,0);
        arr = nums;
        sumBuild(0,0,SIZE-1);
    }
    
    void update(int index, int val) {
        updateQuery(index,val,0,0,SIZE-1);
    }
    
    int sumRange(int left, int right) {
        return sumQuery(0,0,SIZE-1,left,right);
    }
};

