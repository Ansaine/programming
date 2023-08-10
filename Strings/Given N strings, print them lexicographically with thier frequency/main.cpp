// Basic Map problem
#include <bits/stdc++.h>

using namespace std;
int main()
{

int n;              //total number of strings
cin>>n; 

map <string,int> m;

for(int i =0; i<n; i++)     // Inserting strings into map
{
    string temp;
    cin>>temp;

    m[temp]+= 1;            //m[temp] automatically gets the value 0

}

for( auto i :m)
{
    cout<<i.first<<" "<<i.second<<"\n";
}

return 0;

}
