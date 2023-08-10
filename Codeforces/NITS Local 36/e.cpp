
typedef long long ll;
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
// #define int long long - makes all int long long as we dont have much data restrictions

#include<bits/stdc++.h>
using namespace std;

int gscore;

int solve(int i ,int total,  vi &points , vector<vector<int>> &dp)
{
    if(i == -1)
        return total; 

    if(dp[i][total]!= -1)
        return  dp[i][total];
                

    if(points[i]<total){
        int x = solve(i-1,total - points[i], points,dp);
        int y = solve(i-1,total, points,dp);
        return dp[i][total] =  min(x,y);
    }else{
        return  dp[i][total] = solve(i-1, total, points,dp);
        
    }

}


int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

;
int n, score;
cin>>n>>score;
gscore = score;

//dp[][]  n - score
vector<vector<int>> dp(n+1,vector<int> (score+1,-1));
vi points(n,0);
int max_ele = 0, max_index;
for(int i = 0 ; i<n; i++){
    int temp;
    cin>>temp;
    points[i] = temp;

    if(temp>max_ele){
        max_ele = temp;
        max_index = i;
    }
}


swap(points[n-1], points[max_index]);
int sum = accumulate(points.begin(),points.end(),0);

if(sum<score)
    cout<<-1;
else{

    int x = solve(n-2,score, points,dp);
    cout<<abs(x - points[n-1]);
}


return 0;
}
