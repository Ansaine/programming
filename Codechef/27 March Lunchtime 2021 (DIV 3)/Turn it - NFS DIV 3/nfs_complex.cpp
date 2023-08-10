
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
            float v,u,a,s;

            int count = -1;

            cin>>u>>v>>a>>s;

            for(int i=1;i<=s;i++)       //we will calculate velocity v per metre
            {   
                float temp;

                temp = u*u - 2*a*s;

                if(temp<0)              //if velocity becomes negative
                {
                    cout<<"yes"<<"\n";
                    count=1;
                    break;
                }
                else                    //for positive velocity ,it should be equal or less than v
                {
                    temp = sqrt(temp);

                    if(temp<=v)
                    {
                        cout<<"yes"<<"\n";
                        count=1;
                        break;
                    }

                    u=temp;
                }
            }

            if(count==-1)
            cout<<"no"<<"\n";        
            
                   
        }

        return 0;
    }
  
   