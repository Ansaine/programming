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
    int n;
    cin>>n;
    int total_shifts =0 ;

    vector<long> v(n);

    for(int i =2; i<n+2; i++)     //input vector
    {
        cin>>v[i];
    }
                                    //vector is 1 index
    for(int i =2 ; i<n+2; i++)       //checking div by i+1 
    {   
        int temp_total_shifts = total_shifts;

        for(int j= 0; j<= total_shifts; j++)
        {
            if(v[i]%(i-j)!=0)
            {
                ++total_shifts;
                break;
            }
        }

        if( temp_total_shifts == total_shifts)      //if one number doesnt disappear then answer is no
        {
            goto no_lable;
        }

    }

            if(total_shifts == n)
                cout<<"YES\n";
            else
            {
no_lable:       cout<<"NO\n";
            }




}

return 0;
}
