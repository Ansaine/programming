#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;



void SortedInsert(struct Node *p,int x)         //takes pointer to node
{
 struct Node *t,*q=NULL;
 
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=x;
 t->next=NULL;

if(first==NULL)
    first=t;
else
{
    while(p && p->data<x)
    {
        q=p;
        p=p->next;
    }
    if(p==first)
    {
        t->next=first;
        first=t;
    }
    else
    {
        t->next=q->next;
        q->next=t;
    }
}

}

int hash_function( int key)             //hashing function
{
    return key%10;
}

void Insert(struct Node* HT[], int key)    //inserting to linked list in sorted order
{
    int index = hash_function( key);
    SortedInsert( HT[index], key);
}


int main()
{

struct Node *HT[10];

for(int i =0; i<10;i++)         //initialising the pointers to NULL
    HT[i] = NULL;   


Insert( HT, 12);
Insert( HT, 22);
Insert( HT, 42);


 return 0;
}