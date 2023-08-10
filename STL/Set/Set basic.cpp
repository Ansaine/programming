// Set is same like in maths.
// It is a container
// It stores data in ascending order and they all are UNIQUE, i.e non repeating
// Set is made using Red Black tree i.e balanced binary search tree
// s.end() is the memory after the end value in set. (not like begin which points to 1st value)
//******* Set cannot be used as s[i] unlike vectors and pairs
// Addition and deletion is possible in set but cant modufy values.

//https://www.youtube.com/watch?v=xmBKxtAZ-MY&t=193s best video for reference

#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    set <int> s;        //declaring set variable(object) s
    
    s.insert(4);
    s.insert(9);
    s.insert(5);
    s.insert(4);

    cout<<"Size of set : "<<s.size()<<endl;   //s.size() displays size

    set <int> :: iterator itr   ;        // iterator itr for traversing

    for(itr = s.begin(); itr!=s.end(); itr++)
    {
        cout<<*itr<<" ";               // itr is a class pointer so to get value we use *itr
    }
    
    cout<<endl;

//How to make the set in descending order - i have two ways

//1st method is by iterating the loop backwards

    for(itr = --s.end(); itr!=(--s.begin()); itr--)
    {
        cout<<*itr<<" ";               
    }cout<<endl;


//2nd method
//declare the set as

    set <int,greater<int>> s1;   //The new set object will be in descending order

//Deleting a value form set

    s.erase(5)  ;       // will erase 5 from set s

//deleteing the whole set

    s.clear();      

//Finding a value from set

    if(s.find(5)!= s.end())         //s.find() returns the iterator(in a way, returns the pointer) of that value if found from set s
    {                               //if not then it will return an iterator pointing to s.end()
        cout<<"found element"<<endl;
        //cout<<s.find(5);           this is an error as types dont match for cout operation
        //cout<<*itr ;               this is the correct way
    }
    else
    {    cout<<"Didn't find element"<<endl; }

}
