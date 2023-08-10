#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;

int n =t;

vector <int> v;


while(t--)
{   
    int temp;
    cin>>temp;

    v.push_back(temp);

}

sort( v.begin(), v.end());

for(int i =0; i<n; i++)
{
    cout<<v[i]<<" ";
}

cout<<"\n";

return 0;
}
