#include<bits/stdc++.h>
using namespace std;

int main()
{
string pat = "for";
string txt = "forxxorfxdofr";

map<char,int> mp1,mp2;
	
	for(int i = 0; i<pat.size(); i++)
	{
	   ++mp1[pat[i]];    
	}
	
	int count = 0;
	int i = 0, j=0;
	
	while(j<txt.size())
	{   
	    if( j - i +1 <=pat.size() )                  //window size is j-i +1
	    {
	        ++mp2[txt[j]];
	        j++;
	    }
	    else
	    {  
	        if(mp2 == mp1){
	            count++;
	        }
	            
	       //sliding the window now
	        j++;
	        mp2[txt[j]]++;
	        mp2[txt[i]]--;                         // we erase the mappings which are 0 so that we can compare 2 maps
	            if(mp2[txt[i]]<= 0){
	                mp2.erase(txt[i]);
	            }
	        i++;
	    }
	}

    cout<<count;
    return 0;

}