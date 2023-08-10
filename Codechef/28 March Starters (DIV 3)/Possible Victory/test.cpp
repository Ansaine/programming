#include<bits/stdc++.h>
using namespace std;

int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int a_score;
int b_current_score;
int overs_passed;

cin>>a_score;
cin>>b_current_score;
cin>>overs_passed;


int overs_left = 20 - overs_passed;
int score_needed = a_score - b_current_score;

if( overs_left*6*6 > score_needed)
    cout<<"YES";
else
    cout<<"NO";



return 0;
}
