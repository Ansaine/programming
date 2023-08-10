// this is 1 index and we assume height and width both are >=1

#include<bits/stdc++.h>
using namespace std;

bool comp_y(pair<int,int> a, pair<int,int> b)       //y coordinates in increasing order
{
    return a.second<b.second;
}

int main()
{   
    int width,height,n;
    cin>>width>>height>>n;

    int max_width = 0, max_height = 0;

    vector<pair<int,int>> coordinates;

    for(int i =0; i<n; i++)             //taking in coordinates
    {
        int x,y;
        cin>>x>>y;

        coordinates.push_back({x,y});    //or we can use make_pair(x,y)
    }

    //for getting max width

    sort(coordinates.begin(),coordinates.end());
    max_width = coordinates[0].first - 1;

    for( int i = 0; i<n-1 and n>1; i++)
    {
        if((coordinates[i+1].first - coordinates[i].first -1 )>max_width)
            max_width = coordinates[i+1].first - coordinates[i].first-1;
    }

    if( (width-coordinates[n-1].first )>max_width)       //last width
        max_width = (width-coordinates[n-1].first  );

//for getting max_height

    sort(coordinates.begin(), coordinates.end(), comp_y);
    max_height = coordinates[0].second - 1;

    for(int i =0; i<n-1 and n>1;i++)
    {
        if((coordinates[i+1].second - coordinates[i].second -1 )>max_height)
            max_height = coordinates[i+1].second - coordinates[i].second -1;
    }

    if((height- coordinates[n-1].second )> max_height)        //last height
        max_height = height- coordinates[n-1].second ;


cout<<max_width*max_height<<endl;


    return 0;
}