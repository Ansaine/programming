
#include<bits/stdc++.h>
using namespace std;

void permute(char s[],int k)
{

static int hash_array[10]={0};
static char result[10];

int i;

if(s[k] =='\0')
{   
    result[k] = '\0';
    cout<<result;
}
else
{

    for(i=0; s[i]!='\0'; i++)
    {   
        if( hash_array[i]==0)
        {
            result[k]= s[i];
            hash_array[i]=1;

            permute( s,k+1);
            hash_array[i] = 0;

        }
    }

}

}

int main()
{

char s[]= "ABC";
permute(s,0);

return 0;
}