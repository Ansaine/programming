#include<bits/stdc++.h>
using namespace std;


// arr1 : 1 3 5 7
// arr2 : 0 2 6 8 9
// we need to make arr1 : 0 1 2 3 and arr2 : 5 6 7 8 9


//Simple solution - swapping first elements and placing the element in the second array in its correct position
// GFG - 236/310 test cases passed TLE.

void merge(int arr1[], int arr2[], int n, int m) { 
        
        for(int i = 0; i<n ; i++){
        
        if(arr1[i]>arr2[0]){
            swap(arr1[i],arr2[0]);
            
            for(int j = 0; j<m-1; j++){
                if(arr2[j]>arr2[j+1])
                    swap(arr2[j],arr2[j+1]);
                else
                    break;                      //we can break as the array is already sorted
            }
        }
        
    } 
}