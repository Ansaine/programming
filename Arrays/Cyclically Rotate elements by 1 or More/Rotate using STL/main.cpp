//It rotates such a way that the vector pointed in the middle becomes the first element
#include<bits/stdc++.h>

using namespace std;
void display( vector<int> v)
{
    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
  
int main () {
    
    vector<int> vec1{1,2,3,4,5,6,7,8,9};
  
    rotate(vec1.begin(), vec1.begin()+ 3, vec1.end());              // rotating left 3 spaces
    display(vec1);
     
    
    rotate(vec1.begin(), vec1.begin()+vec1.size()-2, vec1.end());   //rotating right 2 spaces
    display(vec1);
  
return 0;
}