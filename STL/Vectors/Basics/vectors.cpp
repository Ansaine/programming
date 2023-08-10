#include<bits/stdc++.h>
using namespace std;

int main()
{

//**** Initialise a vector with values

vector<int> v( 10, 0)        ;                                   //vector with 10 values, each set to 0
vector<int> array={1,2,3,4,5} ;

int i = 3;

//partial sum of elements of vector
cout<< accumulate(array.begin() + i, array.end() -1,0 ) ;       //0 is the initial sum , i tells us the starting point


//searching for an item 

vector<int>:: iterator it;

it = find( array.begin(), array.end(), 3);                      // array.end() returns next iterator after last element
                                                                // find() checks from 1st element to second last element
                                                                // if found, returns index else returns last element

if( it!= array.end())
{
    cout<<" Element found at "<<array.begin() - it;     // counting from 0
}








return 0;
}
