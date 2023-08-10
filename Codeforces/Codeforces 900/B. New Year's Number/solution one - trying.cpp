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
else if(number%2020==0 || number%2021 ==0 || number%4041== 0)
{
    result = "YES";
}
else if( (number - 2020)%2021 == 0 || (number - 2021)%2020 == 0)
{
    result = "YES";

}
else
{
    result = "NO";
}

cout<<result<<"\n";


}


return 0;

}
