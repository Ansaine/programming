#include<bits/stdc++.h>
using namespace std;

// next_permutation( start, end)
// It returns true if next permuation is available
// and returns false at last permutation i.e reverse/descending order
// IMP - The thing is even though it returns false, it still permutes the array
// Hence we ues it with "do while" loop

int main()
{   
    int arr[] = { 1, 2, 3 };
    
    cout << "The 3! possible permutations with 3 elements:\n";
    do {
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    }while (next_permutation(arr, arr + 3));

// next_permutation(v.begin(),v.end()) - for vectors
}

 

