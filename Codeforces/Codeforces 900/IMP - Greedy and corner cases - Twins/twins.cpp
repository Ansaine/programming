#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n;
cin>>n;
int coins_needed =0;

if(n  == 1)                     // case 1 : if only 1 coin is there
{
    coins_needed = 1;
}
else                            // case 2 : other cases
{   

vector<int> array;

for(int i =0 ; i<n; i++)        // input values
{   
    int temp;
    cin>>temp;

    array.push_back(temp);
}



sort(array.begin(), array.end(), greater<int>());           //desc order sorted

for(int i = 0 ; i< n;i++)               //***** Whats important is we iterate to just before the end element;
{   
    if( i == n -1)
    {
        coins_needed = n;
    }
    else if( accumulate(array.begin(), array.end() - n +1 +i,0) > accumulate(array.begin()+i+1 , array.end(),0))
    {
        coins_needed = i +1;
        break;
    }

}

}




cout<<coins_needed;



return 0;
}
