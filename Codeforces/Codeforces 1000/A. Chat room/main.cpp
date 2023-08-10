#include<bits/stdc++.h>
using namespace std;
int main()
{

cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string hello ="hello";

string str;
cin>> str;

int i = 0;              //for indexing hello

for(int j = 0; j<str.length(); j++)
{
    if(i>4)
    { break; }

    else
    {
        if(str[j] == hello[i])              //letter is found
        {   
            i++;
        }
    }
}

if( i >4)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}



return 0;
}
