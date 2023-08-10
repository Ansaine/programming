#include<bits/stdc++.h>
using namespace std;
int main()
{

cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;

while( t--)
{

string result;   

int number;
cin>>number;

if( number < 2020)
{
    result = "NO";
}
else {

    if( (number - (number/2020)*2020) <= number/2020 )          //this formula is from https://www.youtube.com/watch?v=E4ezpCF-o6Q
        result ="YES";
    else
        result = "NO";

}

    cout<<result<<"\n";

}
return 0;

}
