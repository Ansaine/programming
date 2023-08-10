#include<bits/stdc++.h>
using namespace std;

//Merge sort is divided into Two parts -
// 1st part recursively divides and the 2nd part joins 


//here left half is sorted and right half is also sorted
// we cant make this funtion without extra array as we are both compaaring
// and storing the values which cant be done without extra space
void merge(vector<int> &v, int l, int mid, int h)
{   
    vector<int> temp;

    int i = l, j = mid+1;

    while(i <= mid and j<=h)
    {
        if(v[i] == v[j]){
            temp.push_back(v[i]);
            temp.push_back(v[j]);
            i++;j++;
        }
        else if(v[i]<v[j]){
            temp.push_back(v[i]);
            i++;
        }else{
            temp.push_back(v[j]);
            j++;
        }
    }

    //remaining elements
    while(i<=mid){
        temp.push_back(v[i]);
        i++;
    }

    while(j<=h){
        temp.push_back(v[j]);
        j++;
    }

    //inserting into v vector
    for(int k = l; k<=h; k++)
    {
        v[k] = temp[k-l];
    }
    

}

void mergeSort(vector<int> &v,int l, int h)
{       
    if(l<h)
    {   
        int mid = l + (h-l)/2;

        mergeSort(v,l,mid);
        mergeSort(v,mid+1,h);

        merge(v,l,mid,h);

    }
}

int main()
{
    vector<int> v = {4, 8 ,5 , 4 ,0 , 9, 11, 0, -1};
    mergeSort(v,0,v.size()-1);

    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
