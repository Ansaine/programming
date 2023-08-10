
typedef long long ll;
#define mod 1e9+7
#define pb push_back
// #define int long long - makes all int long long as we dont have much data restrictions

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
    int n;
    cin>>n;
    n-=3;

    int part;
    int a,b,c;

    if(n%3==0){

        part = n/3;
        a = part;
        b = a+1;
        c = a-1;
    }
    else if ((n-1)%3==0){
        part = (n-1)/3;
        a = part;
        b = part+2;
        c = a -1;
    }else if((n-2)%3 ==0 ){

        part = (n-2)/3;
        a = part+1;
        b = a+1;
        c = a-2;
    }

    cout<<a+1<<" "<<b+1<<" "<<c+1<<"\n";

}

return 0;
}
