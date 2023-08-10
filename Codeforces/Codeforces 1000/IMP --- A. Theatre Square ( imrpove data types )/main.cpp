#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ull n,m,a;
cin>>n>>m>>a;

ull square_area = n*m;
ull tile_area = a*a;

ull count = 0;

if( tile_area >= square_area){
    count = 1;
}
else{

    ull horizontal, vertical;

    long double n_2 = (long double)n;
    long double m_2= (long double)m;


    horizontal = (ull)round( ceil(n_2/a) ) ;
    vertical = (ull)round( ceil(m_2/a) ) ;

    count = horizontal*vertical;
}

cout<<count;

return 0;
}
