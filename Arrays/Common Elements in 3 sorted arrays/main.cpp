//  https://practice.geeksforgeeks.org/problems/common-elements1132/1
// special case if all elements are 3 in all arrays, we need to print 3 once not all the time
#include <bits/stdc++.h>
using namespace std;

class Solution
{
 public:    
 vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
 {
     vector<int> common;

     int i=0,j=0,k=0;

     while( i<n1 && j <n2 && k<n3)
     {
        if(a[i]<b[j])
            {i++;}

        else if( a[i]> b[j])
            {j++;}

        else                                // a[i] and b[j] are equal
        {
            while( c[k]< b[j])
            {k++;}

            if( c[k]>b[j])
            {i++;j++;}

            else                            // all elements are same
            {
                if( (find(common.begin(),common.end(), c[k])) == common.end())      //element not previously saved
                {
                    common.push_back(c[k]);
                }
                
                i++;j++;k++;
            }
        }
     }
 }


};   