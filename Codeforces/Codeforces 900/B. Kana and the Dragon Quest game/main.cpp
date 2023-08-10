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
    int hit_point, absorptions, lightnings;
    cin>>hit_point>>absorptions>>lightnings;

    
    while(  (hit_point>0) && (absorptions>0 || lightnings>0))
    {
        if(  absorptions <= 0 )            //absorptions are finished
        {   
            hit_point-=10;
            lightnings--;
        }          
        else if( lightnings<=0)         //lightnings are finished
        {
            hit_point = hit_point/2 + 10;
            absorptions--;

        }            

        else                            //both attacks are available
        {
            if( ( hit_point/2 + 10)==  (hit_point -10))           //if both give same damage
            {  
                hit_point-=10;
                lightnings--;
            }    
            else if( ( hit_point/2 + 10)>  (hit_point -10))        //if lightning gives more damage
            {
                hit_point-=10;
                lightnings--;
            }
            else
            {
                hit_point = hit_point/2 + 10;
                absorptions--;   
            }
                
        }

    }

    if(hit_point<=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

return 0;
}


