#include <bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int> v)
{
    map<int,int> map1;
    int result;

    for(int i =0; i<v.size(); i++)
    {
        if(map1[v[i]] == 1)
        {
            result = v[i];
            break;
        }
            
        else
            { map1[v[i]] = 1;}
    }
        
    return result;
}



int main()
{
    vector<int> v = { 1,5 ,6,5,7} ;
    cout<<findDuplicate(v);

    return 0;
}