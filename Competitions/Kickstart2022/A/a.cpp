#include<bits/stdc++.h>
using namespace std;

int main()
{

const int pi = 3.141592;
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;

while(t--)
{
    int r,a,b;
    cin>>r>>a>>b;

    double rad = r,area = pi*rad*rad;

    while(rad !=0)
    {
        //going left

        rad = -(a*rad - rad);
        area += pi*rad*rad;

        if(rad!=0)
        {
            rad = -(rad/b - rad);
            area += pi*rad*rad;
        }       
    }

    return area;

}
cout<<"\n";

return 0;
}
