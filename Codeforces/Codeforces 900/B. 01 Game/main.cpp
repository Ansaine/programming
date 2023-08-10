#include<bits/stdc++.h>
using namespace std;

int main()
{

int t;
cin>>t;

while(t--)
{
    string str;
    cin>>str;

    int counter =0 ;

    while( str.find('0')!= string::npos && str.find('1')!= string::npos && str.length()>0)
    {
        for(int i =0; i< str.length() -1;i++)
        {   
            
            if( (str[i]=='0' && str[i+1]== '1') ||(str[i]=='1' && str[i+1]== '0'))
            {
                counter++;

                str.erase(i,2);
                break;
            }
        }
    }

    if(counter%2 == 0)
        cout<<"NET"<<"\n";
    else
        cout<<"DA\n";
    
}
}