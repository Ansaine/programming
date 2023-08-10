#include<bits/stdc++.h>
using namespace std;

int comb(int n, int r)
{   
    if(r==0 or r==n)
        return 1;
    if(r == 1)
        return n;        
    return comb(n-1,r) + comb(n-1,r-1);
}
