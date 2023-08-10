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

string str;
cin>>str;

int temp = n;

if(n==1)
{   
    if(str[0]=='?')
        cout<<"R\n";
    else    
        cout<<str[0]<<"\n";

        
    goto last;
}

while( temp--)
{
    for(int i = 0; i<n-1; i++)
    {
        if(str[i] == 'R' && str[i+1] == '?')
            str[i+1] = 'B';

        if(str[i] == 'B' && str[i+1] == '?')
            str[i+1] = 'R';
    }

    for(int i = 1; i<n; i++)
    {
        if(str[i] == 'R' && str[i-1] == '?')
            str[i-1] = 'B';

        if(str[i] == 'B' && str[i-1] == '?')
            str[i-1] = 'R';
    }
}


cout<<str<<"\n";

last :          ;
}

return 0;
}
