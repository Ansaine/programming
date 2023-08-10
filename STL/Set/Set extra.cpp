#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
set <int> s;

    s.insert(4);
    s.insert(9);
    s.insert(5);
    

cout<<*s.lower_bound(3);    //returns an iterator equal to or greater than 3
cout<<*s.upper_bound(10);   //returns number strictly greater than 10 
                            // else returns wrong value
return 0;
}

// Unordered set
// Lower bound and upper bound functions cannot be used with unordered set
