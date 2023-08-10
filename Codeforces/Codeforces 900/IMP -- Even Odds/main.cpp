#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

long long n,k;
cin>>n>>k;

long long odds,evens;

if( n%2 == 1)               //if n is odd
{   
    odds = (n+1)/2;
    evens = (n-1)/2;

}
else{                       //if n is even

    odds = n/2;
    evens = n/2;

}

if( k<= odds)
{
    cout<<2*k -1 ;
}
else{

    long long new_k = k-odds;        //for even part array, choosing index
    cout<<2*new_k;
}




return 0;
}
