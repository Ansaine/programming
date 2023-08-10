#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int drinks;
cin>> drinks;

int temp = drinks;
int sum = 0;

while(temp--)
{
    int temp2;
    cin>>temp2;

    sum+= temp2;
}

float percent = (float)sum/(drinks*100);
cout<<percent*100.0;



return 0;
}
