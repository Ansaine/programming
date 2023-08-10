#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n,k;
cin>>n>>k;

vector<int> arr;
arr.push_back(0);       //making 1st value 0 to make it a 1 index vector;

for(int i = 1 ; i<=n; i++ ){
    
    int temp;
    cin>>temp;
    arr.push_back(temp);
}

int counter= 0;

for(int i =1 ; i<=n; i++)
{
    if(i <= k){

        if(arr[i] >0)
            counter++;
    }
    else{

        if(arr[i] >0 && arr[i] == arr[i-1] ){
            counter++;
        }
        else{
            break;
        }
    }
}

cout<<counter;


return 0;
}
