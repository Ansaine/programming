#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//ascending order aranged. We can use greater<int> for descending
//less_equal<int> also can be used where necessary

int main(){

    pbds a;

    a.insert(1);
    a.insert(3);
    a.insert(6);

    //to print elements of a

    for(auto x: a)
        cout<<x<<" ";

    //finding the Kth element
    //Iterator
    cout<<"Oth element is"<< *a.find_by_order(0)<<endl;
    cout<<"1st element is"<< *a.find_by_order(1)<<endl;

    //number of elements less than a number x say 6
    //INT
    cout<<a.order_of_key(6);

    //lower bound of x -> first element greater than or equal to x
    //Iterator
    cout<<*a.lower_bound(6);

    

    return 0;
}
