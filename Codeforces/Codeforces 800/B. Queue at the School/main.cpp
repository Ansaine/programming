#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n,t;
cin>>n>>t;

string str;
cin>>str;

for( int i =1 ; i<=t ; i++)                 //time traversal
{
    for(int j =0; j<n-1; j++)               //string traversal
    {   
        if( str[j] =='B' && str[j+1] =='G')
        {
            str[j] ='G';
            str[j+1] ='B';
            ++j;
        }

    }
}

cout<<str;

return 0;
}
