#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;

while(t--)
{   
    int n,a,b;
    cin>>n>>a>>b;

    string str;

    int i ;
    char temp ='a' ;    

    for( i =0 ; i< b; i++)                  //inserting first b distinct charecters
    {
        str.push_back(temp);
        temp++;
    }

    for( int j = i; j<a; j++)                   //inserting remaining charecters till a;
    {
        str.push_back(str[j - b]);              //pushing in old charecters
        i++;                                    //global index marker to keep count
    }

    for(int j = i; j<n; j++)
    {
        str.push_back(str[j - a]);              //pushing in old charecters
        i++; 
    }

cout<<str<<"\n";

}

return 0;
}


