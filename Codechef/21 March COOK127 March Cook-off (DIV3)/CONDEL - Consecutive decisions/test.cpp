
//we need to choose only one sub array after that rest all cost should be one
//sub array having the lest sum will give us the required minimum cost

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}



int main()
{
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int t;
cin>>t;

while(t--)
{   
    int n,k;
    cin>>n>>k;

    int array[n+1];     //initial array

    int temp_sum=0;
    int min_sum=fact(n);

    int start_index;

    for(int i = 1; i<= n-k+1; i++)
    {       
        temp_sum = 0;           //making it 0 before start

        for(int j=i ; j<= i+k-1;j++)            //sum of subarray
        {
            temp_sum+=array[j];
        }

        if(min_sum>temp_sum)
        {
            min_sum=temp_sum;
            start_index=i;
        }
        


    }

    int rest=0;             //to calculate sum of rest elements

    for(int i = 1; i<= n-k+1; i++)
    {
        if(i>=start_index && i<=start_index+k-1 )
        {
            continue;
        }

        rest+=array[i];
    }

    cout<<fact(min_sum)+rest<<"\n";
    
}
    return 0;
}
