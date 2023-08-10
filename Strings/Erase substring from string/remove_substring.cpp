//https://www.geeksforgeeks.org/stdstringerase-in-cpp/

#include<bits/stdc++.h>
using namespace std;

int main()
{
int i;
string str = "Elephant";

str.erase( str.begin() + 4);            // removes only 5th charecter
str.erase(4);                           //in a 0 index string it removes everything from index 4
                                        // also can be said it removes all charecters except first four

str.erase(1,4);                         // removes from index 1 to 4 - Elephant becomes Eant
str.erase(str.begin(), str.end() - i);  // removes [begin , end -i)




return 0;
}
