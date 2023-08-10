#include <bits/stdc++.h>
  #define endl "\n"
  #define rapid ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #define ll long long
  #define db1(x) cout<<#x<<"="<<x<<'\n'
  #define db2(x,y) cout<<#x<<"="s<<x<<","<<#y<<"="<<y<<'\n'
  #define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
  #define rep(i,a,b)  for(int i=(a);i<(b);i++)
  #define all(a)      (a).begin(),(a).end()
  using namespace std;


void solve (){
int n,m;
cin>>n>>m;
int football[n],cricket[m];
for (int i = 0; i < n; ++i)
{
  cin>>football[i];
}
for (int i = 0; i < m; ++i)
{
  cin>>cricket[i];
}
int count = 0,counter = 0;
vector<int> v;
int i,j;
for (i = 0,j = 0; i < n && j < m;)
{
  if(football[i] < cricket[j]){
    i++;
    v.push_back(1);

  }
  else{
    j++;
    v.push_back(2);
  
  }

}
while(i < n){
v.push_back(1);
i++;
}
while(j < m){
v.push_back(2);
j++;
}

for (int i = 1; i < v.size(); ++i)
{
  if(abs(v[i] - v[i - 1]) != 0)
    counter++;
}
if(v[0] != 1)
counter++;
// for(auto it : v)
// cout<<it<<" ";
cout<<counter<<endl;
}



  int main(){
  rapid
int t;  
cin>>t;
while(t-- > 0)
     solve();

  }