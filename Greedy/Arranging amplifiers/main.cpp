#include<bits/stdc++.h>
using namespace std;

// THree steps
// 1. arrange in descending order so that at the end the power becomes large
// 2. 1s should be in the front
// 3. only one exception - 2 3 should not be in descending order

int main()
{


int t;
cin>>t;

while(t--)
{   
    int n;
    cin>>n;

    vector<int> amp(n,0);

    //input 
    for(int i =0 ;i < n; i++)
    {
        cin>>amp[i];
    }

    sort(amp.begin(), amp.end(), greater<int>());

    if(amp[0] == 3 and amp[1] == 2)
    {
        swap(amp[0],amp[1]);
    }

    int temp  = n;

    while(amp[n-1] == 1 and temp>0)
    {
        rotate(amp.begin(), amp.begin() + n -1, amp.end() );
        temp--;
    }

    //display
    for(int i =0 ;i < n; i++)
    {
        cout<<amp[i]<<" ";
    }
    cout<<endl;

}

return 0;
}
