#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string str1,str2,str3;
cin>>str1;

int k =0;

for(int i=0;i<str1.length(); i=i+2)             //taking only numbers into str2
{
    str2.push_back(str1[i]);
    k++;
}
k=0;

sort(str2.begin(),str2.end());

if(str2.length() == 1){
        str3 = str2;
}
else{

    str3.push_back(str2[0]);
    k++;

    for(int i =1; i<str2.length();i++)
    {   
        str3.push_back('+');
        k++;
        str3.push_back(str2[i]);
        k++;
    
    }

}

cout<<str3;

return 0;
}
