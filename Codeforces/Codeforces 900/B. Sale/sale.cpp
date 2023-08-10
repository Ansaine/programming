#include<bits/stdc++.h>
using namespace std;
int main()
{

cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n,m;
cin>>n>>m;

int sum = 0;
int count = 0;

vector<int> v(n,0);

for(int i =0; i<n;i++)
{
    cin>>v[i];
}

sort(v.begin(), v.end());


int i=0;

while( count < m && sum > (sum + v[i]) )
{   
     
        sum+= v[i];
        i++;
        count++;
    
    
}

if(sum<0)
    sum = -1*sum;

cout<<sum;

return 0;
}
