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

    vector<long long> v(n);

    for(int i =0; i<n;i++)
        cin>>v[i];

    for(int i =0; i< n -1; i++)
    {
        for( int j = i+1; j<n; j++ )
        {
            for(int k =0 ; k<= j-i; k++)
            {
                v[i+k] = v[i+k]&v[j-k]; 
            }
        }
    }

    long long max = v[0];

    for(int i =1; i<n;i++)
    {
        if(v[i]>max)
            max = v[i];
    }

    cout<<max<<"\n";


}

return 0;
}
