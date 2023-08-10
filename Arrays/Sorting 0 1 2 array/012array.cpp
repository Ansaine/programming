#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &v)
{
    int l =0 , m=0, h = v.size()- 1;

    while( m <= h)                              //IMPORTANT dont use only if statements , use if , else if
    {
        if( v[m] == 0)
        {
            swap(v[l],v[m]);
            l++;
            m++;            
        }
        else if( v[m] == 1)
        {
            m++;
        }
        else if( v[m] == 2)
        {
            swap(v[m],v[h]);
            h--;
        }
    }

}

void display( vector<int> v)
{
    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{

vector<int> v = { 0,1,1,2,0,1,2,0,1} ;
sort012(v);
display(v);

return 0;
}
