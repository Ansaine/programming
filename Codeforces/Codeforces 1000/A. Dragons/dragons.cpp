#include<bits/stdc++.h>
#include<utility>
using namespace std;

int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int kirito_health;
cin>>kirito_health;

int n;
cin>>n;

vector< pair<int,int>> v(n);

string result = "YES";

for(int i =0; i<n; i++)                
{   
   cin>>v[i].first;                     //dragons strength
   cin>>v[i].second;                    //bonus point
}           



sort( v.begin(), v.end());             //sort the vector pairs based on dragons strengths


for(int i =0; i<n ; i++)
{
    if( kirito_health > v[i].first)
    {
        kirito_health+= v[i].second;
    }
    else{

        result ="NO";
        break;
    }
}

cout<<result;


return 0;
}
