#include<bits/stdc++.h>
#include<utility>
using namespace std;

typedef long long ll;

int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

long t;
cin>>t;

while(t--)
{

ll number;
cin>>number;

int result;

ll factors_2 = 0;
ll factors_3 = 0;


if( number == 1)
{
    result = 0;
}
else{

    ll temp1 = number;
    ll temp2 = number;

    while( temp1%2==0 )                 //calculating factors of 2;
    {
        temp1/=2;
        factors_2++;

    }

    while( temp2%3==0 )                 //calculating factors of 3;
    {
        temp2/=3;
        factors_3++;

    }

    if( factors_2>factors_3)
    {
        result = -1;
    }
    else
    {
        result  = (factors_3 - factors_2)*2 + factors_2;
    }
    


}

cout<<result;
return 0;

}

}
