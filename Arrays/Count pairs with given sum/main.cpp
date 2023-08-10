// In case there are no duplicate elements, it has very easy solution, having index low and high and traversing
// In case of duplicate elements, we can use the normal hash method only if one number is duplicate
// Im trying to find a generic solution
// This is a good solution still geeks for geeks show error idk why!
// [1,1,1,1] with sum 2 is a special problematic case


#include<bits/stdc++.h>

using namespace std;

int main()
{

int size,sum;
cin>>size>>sum;

map<int,int> m;
vector<int> array;

int counter = 0;

for(int i = 0; i<size; i++)                 //input array as well as put it in map;
{
    int temp;
    cin>>temp;
    
    array.push_back(temp);
    m[temp]+= 1;                            // map intial value automatically gets initialised by 0
    
}

cout<<"The Map is :\n";

for(auto i:m)
{
    cout<<i.first<<" "<<i.second<<"\n";
}

for(auto i: array)
{
    if( m[sum - i] !=0 )              //a counterpart is found
    {   
        counter += m[sum - i];       // for case of repetition
    }
}

cout<<counter/2<<"\n";

}