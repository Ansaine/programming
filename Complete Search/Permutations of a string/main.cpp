#include<bits/stdc++.h>
using namespace std;

int counter =0;

void permute(int l, int r, string &name)
{
    int i;

    if(l == r)
    {
        cout<<name<<"\n";
        counter++;
        return;
    }

    for(i = l; i<= r; i++)
    {
        swap(name[l],name[i]);
        permute(l+1,r, name);
        swap(name[l],name[i]);
    }
}

int main()
{

string word = "abc";
permute(0,word.length()-1,word);

cout<<counter;

return 0;


}