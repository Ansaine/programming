// Just like array has index  i = 0,1,2 ... which points to a value
// maps are also like generalised array, where any value of type can be mapped with another value
// In maps only one value is possible for a key, if repeated then 2nd value is taken
// Maps are good for hashing
// Basic Map is ordered,that is , it is sorted by storying keys in ascending order
// If key is string , then they are sorted lexicographically ,i.e like in a dictionary
// Basic Map is implemented using Red-Black trees
/* In vector pair, the first and second element is contiguous in memory
        wheres in map, the second value can be anywhere. The first value points towards it
        like linked list. That is why we cant do itr+1, but itr++ is possible  */


#include<bits/stdc++.h>

using namespace std;

/*
Important functions

m.end()           - iterator to element after last 
m.size()  
m.clear()         - completely clears the map
m.find(key)       - returns iterator to position else returns map.end() 
m.erase()         - input is either key or iterator. Segmentation fault occurs if wrong iterator is given

*/

int main()
{
    map <int, string> m1;

    m1[2] ="Angshuman";                                  // Ways to insert- Insertion takes O(logn) time
    m1[1] ="Guy";
    m1[5] ="hello";
    m1[3] ="world";

    // m1[7] - any type of calling or searching will automaically asign value of key 7 as 0 and will take logn time

    m1.insert({6,"New method"});                        // insert as a pair so use curly braces

    cout<<m1[2];                                        // returns Angshuman

    
    map <int,string> :: iterator itr;

    for( auto itr= m1.begin() ; itr!= m1.end(); itr++)
    {   
        cout<<itr->first<<" "<<itr->second<<"\n";
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";   // can be done this way also...without brackets *itr.first gives error   

    }

    for(auto it:m){
        cout<<it.first<<it.second;
    }


    // Descending order 
    map<int,int, greater<int>> mp;

    return 0;

}