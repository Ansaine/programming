#include<bits/stdc++.h>
using namespace std;

/*
Solution - 

say we sort the array counts in descending order. then diff is count[0] - counts[1];
ans will be -> total charecters-diff+1



*/

int main(){

    string str = "aabbccdde";
    int arr[26];
    memset(arr,26,0);

    //hashmap for charecter counts
    for(char x: str)
        arr[x-'a']++;

    

    return 0;
}