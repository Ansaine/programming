#include<bits/stdc++.h>
using namespace std;

string str = "MyString";
vector<int> v;
int arr[10],length,sum;

int main()
{

count(v.begin(), v.end(),  1);          // counts 1 in vector v 

accumulate(arr , arr+length , sum);     // here sum means we can give an initial value to be added

 

isalnum(str[0]);    //check if alpha numeric, returns true or false


toupper(str[3]);    //toupper and tolower works on char only. It doesnt transform tha
                    // parameter but returns the char. For string, we need to use it with
                    // Transform

//3rd parameter is the location where the transformed string will be stored
transform(str.begin(), str.end(), str.begin(), ::tolower); 




}