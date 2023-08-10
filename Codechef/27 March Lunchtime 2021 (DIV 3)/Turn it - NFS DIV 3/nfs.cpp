
#include<bits/stdc++.h>
#include<iostream>

using namespace std; 

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        

        while(t--)
        { 
            float u,v,a,s;

            cin>>u>>v>>a>>s;

            if( v*v <= u*u -2*a*s)
                cout<<"yes"<<"\n";
            else
                cout<<"no"<<"\n";        
            
                   
        }

        return 0;
    }
  
   