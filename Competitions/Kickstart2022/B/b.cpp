typedef long long ll;
#include<bits/stdc++.h>
using namespace std;

bool palin(ll n)
{
    string a = to_string(n);
    string b = a;
    reverse(b.begin(),b.end());
 
    if (a==b)
        return 1;
    else
        return 0;
}

int main()
{

cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
int c  = 1;

//0 ->not visited 1->not palin 2->palin

map<ll,int> check;

while(c<=t)
{   
    ll a;
    cin>>a;

    ll count = 0;

    for(ll i = 1 ; i<=sqrt(a); i++)
    {   
        if(a%i==0)
        {
            if(check[i]==0)
            {
                check[i] = 1 + palin(i);
                if(check[i]==2){
                    
                    if(i == a/i)
                        count++;
                    else 
                        count+=2;
                }
            }
            else if (check[i]==1)
                continue;
            else if(check[i] == 2)
                count++;
        }
        
        
    }

    cout<<"Case #"<<c<<": "<<count<<"\n";
    c++;
}

return 0;

}

