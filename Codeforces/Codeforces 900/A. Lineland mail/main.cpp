#include<bits/stdc++.h>
using namespace std;

int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n;
cin>>n;

vector<int> coordinates(n,0);

for(int i=0;i<n;i++)
{
    cin>>coordinates[i];
}

for(int i=0;i<n;i++)
{
    if(i==0)                    //only for first value
    {
        cout<<abs(coordinates[1]- coordinates[0])<<" ";
    }
    else if( i== n-1)           //last value4

    {
        cout<<abs(coordinates[n-2] - coordinates[n-1])<<" ";
    }
    
    else
    {
        cout<<min(abs(coordinates[i-1]- coordinates[i]), abs(coordinates[i+1] - coordinates[i]))<<" " ;  
    }

    cout<<max(abs(coordinates[i]-coordinates[0]),abs(coordinates[n-1]-coordinates[i]));
    
    

    cout<<endl;
}

return 0;
}
