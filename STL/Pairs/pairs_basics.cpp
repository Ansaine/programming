// We can make an array or vector of pairs, as they go well together
// We can sort the vector pair based on the first or second value

#include<bits/stdc++.h>
#include<utility>                   //utlity header for using pairs
using namespace std;
int main()
{

pair<int,char> p1;          

//****  Method 1 to initialise

p1.first = 1;
p1.second = 'A';

//**** Method 2 to initialise

p1 = make_pair( 1 , 'A');           //can use variables here instead of direct data 

//**** Method 3 to initialise

pair<int,string> p2(10,"Talent");

return 0;
}
