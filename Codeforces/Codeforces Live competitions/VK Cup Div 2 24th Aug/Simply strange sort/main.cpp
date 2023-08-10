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
int size;
cin>>size;


vector<int> v1(size) ,v2(size);             //two vectors

for(int i=0; i<size; i++)
{
    cin>>v1[i];
    v2[i]= v1[i];
}

sort(v2.begin(), v2.end());


int counter = 0;                    //max interations will always be size or less


int order = 1;
while( v2!= v1)                     // while vector 1 is not sorted
{   
    if( order == 1)
    {
        for(int i =0 ; i<size-2; i+=2)
        {
            if( v1[i] > v1[i+1])
            { swap(v1[i],v1[i+1]);}
        }

        order = 2;
        counter ++;
    }

    else
    {
        for(int i =1 ; i<size-1; i+=2)
        {
            if( v1[i] > v1[i+1])
            { swap(v1[i],v1[i+1]);}
        }

        order = 1;
        counter ++;
    }  
    
}

cout<<counter<<"\n";

}

return 0;
}
