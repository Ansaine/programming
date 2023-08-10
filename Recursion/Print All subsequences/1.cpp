#include<bits/stdc++.h>
using namespace std;

vector<string> ans;

void subs(int i , string &str,  string &temp)
{   
    if( i == str.size()){
        ans.push_back(temp);
        return;
    }
        
    
    subs(i+1,str,temp);     //not including
    
    temp.push_back(str[i]); //including     
    subs(i+1,str,temp);
    temp.pop_back();
}

int main()
{

string str = "Band";
subs(0,str,"");

for( auto x: ans)
    cout<<x<<" ";



return 0;

}