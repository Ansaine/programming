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
    int columns,rows;
    cin>>columns>>rows;
    int price  = 0;

    int hp = 1,vp = 1;      //horizontal pieces and verticle pieces

    vector<int> xcuts(columns-1,0),ycuts(rows-1,0);

    for(int i = 0; i< (columns-1); i++)
    {
        cin>>xcuts[i];
    }

    for(int j = 0; j<(rows-1); j++)
    {
        cin>>ycuts[j];
    }

    sort(xcuts.begin(), xcuts.end(), greater<int>());
    sort(ycuts.begin(), ycuts.end(), greater<int>());

    int i = 0, j = 0;

    while(i<(columns-1) and j<(rows-1) )
    {
        if(xcuts[i]>= ycuts[j])     //vertical cut
        {   
            price+= xcuts[i]*vp;
            i++;
            hp++;

        }

        else
        {
            price+= ycuts[j]*hp;    //horizontal cut
            j++;
            vp++;
        }
    }

    //for leftover items while traversing

    while(i<(columns-1))
    {   
        price+= xcuts[i]*vp;
        i++;
        hp++;

    }

    while( j<(rows-1))
    {   
        price+= ycuts[j]*hp;
        j++;
        vp++;

    }


    cout<<price<<endl;

}

return 0;
}
