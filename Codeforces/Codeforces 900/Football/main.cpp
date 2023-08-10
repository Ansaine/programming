#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string str;
cin>>str;

string result = "NO";

if(str.length() < 7 ){
    result = "NO";
}
else{

for( int i = 0; i <= str.length() - 7 ; i++)
{
    if( str [i] == '0' && str [i+1] == '0' && str [i+2] == '0' && str [i+3] == '0' && str [i+4] == '0' && str [i+5] == '0' && str [i+6] == '0')
    {
        result = "YES";
        break;
    }
    else if( str [i] == '1' && str [i+1] == '1' && str [i+2] == '1' && str [i+3] == '1' && str [i+4] == '1' && str [i+5] == '1' && str [i+6] == '1')
    {
        result = "YES";
        break;
    }
}

}

cout<<result;

return 0;
}
