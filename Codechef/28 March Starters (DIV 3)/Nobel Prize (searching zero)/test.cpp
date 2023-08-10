#include<bits/stdc++.h>
using namespace std;


int main()
{

cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

long long t;
cin>>t;

while(t--)
{   

int researchers,topics;

int count=0;

cin>>researchers;
cin>>topics;

vector<int> topic_array(topics+1,0);

for(int i=1; i<= researchers; i++)
{   
    int temp;
    cin>>temp;

    ++topic_array[temp];

}

for(int i=1; i<= topics; i++)  //searching 0
{
    if(topic_array[i] == 0)
    {
        count++;
        break;
    }
}

if(count>0)
    {cout<<"Yes\n";}
else
    {cout<<"No\n";}
}


return 0;
}

