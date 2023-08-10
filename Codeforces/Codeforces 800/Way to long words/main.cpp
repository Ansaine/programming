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

string str;
cin>>str;

if(str.length() > 10 )
{
    cout<<str[0]<<str.length() - 2<<str[str.length()-1]<<"\n";
}else
{
    cout<<str<<"\n";
}


}


return 0;
}
