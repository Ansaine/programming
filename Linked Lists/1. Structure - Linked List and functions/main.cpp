#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *first=NULL;
Node *last = first;

void display( struct Node *p)         //iterative display function
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }

    cout<<"\n";
}

void display_recur( Node *p)         // recursive display function
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";                 
        display_recur(p->next);             // if we exchange the 2 statements, then we can  print the linked list in reverse
    }
}

Node* search_recur( Node* p, int value)
{   
    if(p== NULL)
        return NULL;   
    else if( p->data == value)
        return p;
    else
        return search_recur(p->next,value);   

    return p;                               // returns NULL if value not found
    
}

//The reverse function can be made using either two pointer parameters 
//or the first pointer with number of Nodes


void reverse1( Node* ptr1 ,  int n){             //here n is number of Nodes

    Node *trav = ptr1;
    int array[n];

    for(int i =0 ;i<n ; i++){                           //storing data in array in straight order

        array[i]= trav->data;
        trav= trav->next;

    }

    trav = ptr1;

    for(int i= n-1; i>=0; i-- ){

        trav->data = array[i];
        trav= trav->next;
    }
}

void reverse2( Node* ptr1 ,  Node* ptr2){             //this is same as reverse1 just we need to calculate n first;

    int n = 1;
    Node *trav = ptr1;

    while( trav!= ptr2){                               //counting n;
        n++;
        trav= trav->next;
    }

    trav = ptr1;        //resetting trav
    
    int array[n];

    for(int i =0 ;i<n ; i++){                           //storing data in array in straight order

        array[i]= trav->data;
        trav= trav->next;

    }

    trav = ptr1;

    for(int i= n-1; i>=0; i-- ){

        trav->data = array[i];
        trav= trav->next;
    }
}


int main()
{   
    int n;          //number of Nodes
    cin>>n;

    Node *traverser = first;        //for traversing

    for(int i =1; i<=n; i++)        //better we take 1 index for linked list
    {   
        int temp;
        cin>>temp;  

        if(i == 1){   
            
            traverser = (Node *)malloc(sizeof(Node));       //only for first Node as it is a simple null pointer
            first = traverser;                              // first will become same as traverser;
            traverser->data = temp;
            traverser->next = NULL;
            last = traverser;

        }
        else{   

            traverser->next = (Node *)malloc(sizeof(Node));     //for rest Nodes as it is pointing to a Node
            traverser = traverser->next;
            traverser->data = temp;
            traverser->next  = NULL;
            last = traverser;
        }        
        
    } 

    

    
    return 0;
}
