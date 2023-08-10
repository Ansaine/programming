#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int m, n;
cin>>m>>n;

if(m*n == 1)
{
    cout<<0;
}else{

    if(m*n %2 == 0)
        cout<<(m*n)/2;
    else
        cout<<(m*n-1)/2;
}

return 0;
}
