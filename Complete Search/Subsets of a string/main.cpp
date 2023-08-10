#include<bits/stdc++.h>
using namespace std;

int counter = 0;


void permutation( string &substring, int i, string &word)
{
    if( i == word.length())
    {
        cout<<substring<<"\n";
        counter++;
        return;
    }

    permutation(substring,i+1,word);
    substring.push_back(word[i]);
    permutation(substring,i+1,word);
    substring.pop_back();

}

int main()
{

string word = "light";
string empty;

permutation(empty,0,word);
cout<<counter;
return 0;


}