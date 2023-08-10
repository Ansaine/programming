#include<bits/stdc++.h>
using namespace std;

int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;

while(t--)
{

int n;
cin>>n;

vector <long int> v(n+1,0);

for(int i =1; i<= n; i ++)
{
    cin>>v[i];
}

long int increment =0 ;

for(int i =1; i<= n; i ++)
{
    if( v[i]> (i+ increment) )
    {
        increment+= (v[i] - (i+ increment));
    }
}

cout<<increment<<"\n";
}


return 0;
}
