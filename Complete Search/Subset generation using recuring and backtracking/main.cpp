//Here, we use &subset means same array is used in all instances of function call
//thats why we need push as well as pop 

#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v)
{
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<"\n";
}

void generate( vector<int> &subset, int i, vector<int> &num){

static vector<vector<int>> power_set;

if(i == num.size())                     //even if it is 0 index, this is not size-1 as we print when i exceeds num.size()
{
    power_set.push_back(subset);
    display(subset);
    return;
}

generate(subset,i+1,num);               //dont include ith value to subset

subset.push_back(num[i]);               //include ith value to subset      
generate(subset,i+1, num);
subset.pop_back();

}

int main()
{

vector<int> nums = {1,2,3};
vector<int> temp_subset;
generate(temp_subset,0, nums);

return 0;

}
