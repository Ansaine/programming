#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string str;
cin>>str;

string output = "NO";

if( find(str.begin(),str.end(),'H') != str.end())
{
    output="YES";
}
else if( find(str.begin(),str.end(),'Q') != str.end())
{
    output="YES";
}
else if( find(str.begin(),str.end(),'9') != str.end())
{
    output="YES";
}
else{

    output = "NO";
}
cout<<output;

return 0;
}
