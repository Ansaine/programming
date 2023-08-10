#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n;
cin>>n;

vector <long long> v;
v.push_back(0);

int max_count = 0 ;
int temp_count = 0;

for(int i =0; i<n; i++)             //input
{
    long long temp;
    cin>>temp;
    v.push_back(temp);
}

for( int i=1 ; i<= n; i++)
{   
    if( i == n)                     // loop shoud end at last index
    {   
        max_count = max( max_count, temp_count);
        temp_count = 0;

    }
    else if( v[i+1] >= v[i] )
    {   
        temp_count++;

    }
    else
    {
        max_count = max( max_count, temp_count);
        temp_count = 0;
    }
}

cout<<max_count+1;

return 0;
}
