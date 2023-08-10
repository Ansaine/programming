#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool channel=0;           //channel 0 or 1
ll changes =0;

void change()
{
    if(channel ==1 )
        {channel =0 ;}
    else
        {channel = 1;}

    changes++;
    
}



int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;

while(t--)
{   
    int n,m;
    cin>>n>>m;

    vector<ll> football;
    vector<ll> cricket;

    for(int i=1; i<= n; i++)        //football imp times
    {   
        ll temp;
        cin>>temp;
        football.push_back(temp);

    }

    for(int i=1; i<= m; i++)        //cricket imp times
    {   
        ll temp;
        cin>>temp;
        cricket.push_back(temp);
        
    }

int i=0,j=0;

while( i<n || j<m)
{
    if(channel == 0)                     //when in channel 0 football
    {
        if( cricket[j]< football[i+1])
        {
            ++i;
            change();
        }   
        else
        {++i;}     
    }

    if(channel == 1)
    {
        if(football[i] < cricket[j+1])
        {
            ++j;
            change();
        }
        else
        {++j;}
    }
}

cout<<changes<<"\n";


}

return 0;
}

