#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string str1,str2;
cin>>str1>>str2;

int result = 0;

 transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
 transform(str2.begin(), str2.end(), str2.begin(), ::toupper);

for( int i = 0; i< str1.length(); i++)
{   
    if(str1[i]< str2[i])
    {
        result = -1;
        break;
    }
    else if(str1[i]> str2[i]){
        result = 1;
        break;
    }
}

cout<<result;
return 0;
}
