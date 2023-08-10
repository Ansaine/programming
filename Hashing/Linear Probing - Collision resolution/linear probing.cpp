#include<iostream>
#define SIZE 10                     //dont use ; with macros

using namespace std;

int hash_function(int key)
{
    return key%SIZE;
}

int probe( int ht[],int key)
{   
    int i =0;
    int index = hash_function(key);

    while( ht[ (index+i)%SIZE ] !=0)                      
        i++;
    
    return (index+i)%SIZE; 
}

void insert( int h[], int key)
{
    int index = hash_function(key);

    if( h[index]!=0)
        index = probe( h,key); 

    h[index] = key;
}

int main()
{
    int ht[10] = {0};

    insert(ht, 12);
    insert(ht, 24);
    insert(ht, 32);

    for( int i =0 ; i<SIZE; i++)
    
        cout<<ht[i]<<"\n";

    return 0;   

}

