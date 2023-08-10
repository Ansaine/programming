
// Quick sort is a nlogn 


#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int l , int h){

    int pivot = arr[l];
    int i = l;
    int j = h;

    while(i<j){

        while(arr[i]<=pivot)
            i++;
        while(arr[j]>pivot)
            j--;

        if(i<j) swap(arr[i],arr[j]);
    }

    swap(arr[j],arr[l]);
    return j;      //return pivot index      

}

void quick_sort(vector<int> &arr, int l , int h){

    if(l<h){        //means atleast two elements are there as we are not using eqaual sign
        int pivot = partition(arr,l,h);
        quick_sort(arr,l,pivot-1);
        quick_sort(arr,pivot+1,h);
    }
}


int main(){

    vector<int> arr = { 4, 1 ,3, 78, 5 , 3, 2 };
    quick_sort(arr,0,arr.size()-1);
    
    for(auto x: arr)
        cout<<x;

    cout<<endl;
    return 0;
}
