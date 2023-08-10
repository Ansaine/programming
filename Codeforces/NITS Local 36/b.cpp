
typedef long long ll;
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
// #define int long long - makes all int long long as we dont have much data restrictions

#include<bits/stdc++.h>
using namespace std;


//This is Tile FItting Problem
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, m , len;
cin>>n>>m>>len;

string moves;
cin>>moves;

int Ls = 0,Rs = 0 ,Us = 0 ,Ds = 0;
int hor = 0, ver = 0;
int max_up = 0 ,max_down = 0,max_left = 0, max_right = 0;

for(int i = 0; i<len; i++)
{
    if(moves[i] == 'U')
        ver++;
    else if(moves[i] == 'D')
        ver--;
    else if(moves[i] == 'L')
        hor--;
    else if(moves[i] == 'R')
        hor++;

    max_left = min(max_left,hor);
    max_right = max(max_right,hor);

    max_up = max(max_up,ver);
    max_down = min(max_down,ver);

}

int max_width = 1 + abs(max_left) + abs(max_right);
int max_height =1 + abs(max_up) + abs(max_down);



//No. of ways to fit tile into matrix
int counter = 0;
for(int i = 0 ; (i + max_height -1 )<n; i++)
{
    for(int j = 0; (j+max_width -1)<m; j++ ){
        counter++;
    }
}

cout<<counter;

return 0;
}
