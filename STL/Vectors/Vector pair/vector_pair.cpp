#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <pair<int,int>> v;

    v.push_back({1,0});
    v.push_back({3,0});
    v.push_back({2,1});
    v.push_back({3,1});
    v.push_back({4,0});

    sort(v.begin(),v.end());

   for(int i=0 ; i<5; i++)
   {
       cout<<v[i].first<<" "<<v[i].second<<"\n";       
   }

//****** Initialising n vector pairs with a default value

vector< pair<int,int>> v2(15, {0,0});
vector< pair<int,int>> v3(15) ;                  //this will also make 15 vector pairs but with no initial value;         


return 0;
}

