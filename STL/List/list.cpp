// Linked list is implemented in STL as list
// It is a bidirectional container which is useful for fast insertion and deletetion

#include<bits/stdc++.h>

using namespace std;

void display(list<int> &lst)    // pass by reference
{
    list<int>:: iterator it;

    for(it = lst.begin(); it!= lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}

int main()
{

list<int> list1;                // an empty list
list<int> list2(7);             // a list of 7 elements not initialised

//IMP functions 

/*

list1.pop_back();
list1.pop_front();

list1.remove(5);                // remove all occurences of 5

list1.push_back(6);
list1.push_front(7); 

list1.sort();
list1.reverse();
list1.merge(list2);             // merge 2 lists
list1.swap(list2);              // swap 2 lists

*/


}