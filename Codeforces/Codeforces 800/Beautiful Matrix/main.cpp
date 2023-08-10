#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int array[6][6] = {0};

int x,y;


for(int i =1 ; i<=5 ; i++)              //input
{
    for(int j =1 ; j<=5 ; j++)
    {   
        int temp;
        cin>>temp;

        if(temp == 1){
            array[i][j]= temp;
            x=i;
            y=j;
        }
    }
}

cout<<abs(x-3)+abs(y-3);

return 0;
}
