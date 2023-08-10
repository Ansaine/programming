#include<bits/stdc++.h>

using namespace std;

int dp[1001][1001];

int solve(int health, int armour, int i)                //1 = air, 2 = fire, 3 = water
{
    if(health<=0 or armour<=0)
        return 0;
    if(dp[health][armour]!=0)
        return dp[health][armour];
    
    int x,y,z;
    x=y=z=0;
    

    if(i!=1)   x= 1 + solve(health+3,armour+2,1);
    if(i!=2)   y= 1 + solve(health-20,armour+5,2);
    if(i!=3)   z= 1 + solve(health-5,armour-10,3);

    dp[health][armour] =max({x,y,z});
    return dp[health][armour] ;

}




int main()
{
    int t;cin>>t;

    while(t--)
    {   memset(dp,0,sizeof(dp));    //setting dp block of memory as 0
        int health,armour; 
        cin>>health>>armour;
 
        cout<<max({solve(health+3,armour+5,1),solve(health-20,armour+5,2),solve(health-5,armour-10,3)});

    }





    return 0;
}