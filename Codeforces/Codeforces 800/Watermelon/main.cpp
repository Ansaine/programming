#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int watermelon;
cin>>watermelon;

string result = "NO";

if(watermelon <= 3)
{
    cout<<result;
}
else
{
    for(int i =2 ; i<= watermelon/2; i+=2)
    {
        if( (watermelon - i) % 2 == 0 ){

            result = "YES";
            break;
        }
    }
    cout<<result;
}



return 0;
}
