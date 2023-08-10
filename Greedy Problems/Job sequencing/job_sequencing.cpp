#include<bits/stdc++.h>
using namespace std;

struct Job
{
    int id;
    int date;
    int profit;
};

bool comparator(Job a, Job b)               //comparator function for sort 
{
    return(a.profit>b.profit);              // returns true if a profit is more
}

int answer( Job array[], int size)
{
    sort(array, array + size, comparator);

    int total_profit = 0;
    vector<bool> hash(size+1,0);             // hash map, 1 indexed, all values initialised to 0

    for(int i =0 ; i< size ; i++)           // iterate through all jobs    
    {

        for(int j = min(size, array[i].date); j>0; j--)
        {
            if(hash[j]==0)                  //slot is empty
            {
                total_profit+= array[i].profit;
                hash[j] =1;
                break;
            }
        }

    }

    return total_profit;
}

int main()
{
    Job array[] ={  {1,1,30},
                    {2,2,20},
                    {3,1,80},
                    {4,2,60}
                };
    int n = sizeof(array)/sizeof(array[0]);
    cout<<answer(array,n);

    return 0;
}