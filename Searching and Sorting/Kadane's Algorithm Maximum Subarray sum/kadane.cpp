//Here, we find the maximum subarray at each index and see 
//which is the max among them

#include<bits/stdc++.h>

using namespace std;

int kadane(int a[], int n)
{   

int best_max =a[0];
int max_array = a[0];

for(int i=1;i <n; i++)
{   
    max_array = max(a[i], a[i]+max_array); //max subarray sum at that index
    best_max = max(best_max,max_array);
} 

return best_max;


}


int main()
{   
    int array[5] = { 1, -3, 2 , 1 ,-1};

    cout<<kadane( array,5);

    return 0;
}