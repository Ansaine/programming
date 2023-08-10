//Here we consider that for an array having n elements, the values of elements are <= n-1
//We are able to keep the hash values as well as array values because of the previous property

#include <bits/stdc++.h>

using namespace std;

int main()
{

int n = 12;
vector<int> v = { 0, 4 , 6 ,1 , 4 , 8, 0, 2, 4 , 9, 1 , 2}    ; 

for(int i =0 ; i<n; i++)                //for hashing the same array
{
    v[v[i]%n] += n;                     // Look out for mistake here
}

for(int i =0 ; i<n; i++)
{
    if( (v[i]/n) > 1)
    {
        cout<<i<<" ";
    }        
}

cout<<endl;

return 0;
}
