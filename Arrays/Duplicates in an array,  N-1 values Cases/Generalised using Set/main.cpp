#include <bits/stdc++.h>

using namespace std; 

int main()
{
    vector <int> v = {1,4,6,12, 6, 45, 34, 12 , 6};

    set<int> s_unique;                                      // one set to store unique elements 
    set<int> s_copy;                                        // one one to store repeated elements only once

    for(int i =0; i<v.size();i++ )
    {
        if(s_unique.find(v[i]) != s_unique.end())             //element is found
        {
            s_copy.insert( v[i]);
            
        }
        else
        {
            s_unique.insert(v[i]);
        }
    }

    for(auto x: s_copy)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;


}