#include <bits/stdc++.h>

using namespace std;

void display( vector<int> v)
{
    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{

vector<int> v1 = { 0 ,1 , 1 ,4 ,6 ,7, 9, 9 , 11, 12};
vector<int> v2 = { 0, 4, 4 , 9 , 12 };

vector<int> v_union ;                   // for union        - repeat elements are shown
vector<int> v_intersection ;            // for intersection - doesnt repeat elements
vector<int> v_difference ;              // A - B , elements in A not in B
vector<int> v_symmetric_difference;     // All elements that are not common  -> A∪B - A∩B

set_union( v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v3));      //back_inserter constructs a back-insert iterator that inserts new elements at the end of the container to which it is applied  -geeksforgeeks
set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v4));
set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v4));  // we can exchange v1 and v2 to make B - A


display(v_union);
display(v_intersection);
display(v_difference);
display(v_symmetric_difference);

}