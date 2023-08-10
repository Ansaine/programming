//3 cases - insert when 1. first is null, 2. Value is less then first, and 3. in between, and at the end
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *first=NULL;

void insert(Node **p, int index, int value)     // we initialise a pointer to first pointer so we can change the value of first
{
    if(index == 0)                              //before 1st Node
    {   
        if(*p== NULL)                           //if list not initialised
        {                                       // *p is first pointer here
            Node* temp = new Node;
            temp->data = value;
            temp->next = NULL;
            *p = temp;
            return;
        }
        else
        {   
            Node* temp = new Node;
            temp->data = value;
            temp->next = *p;
            *p= temp;
            return;
        }        
    }
    else
    {   
        Node* traverse = *p;                    //setting traverse as first

        for(int i =1; i<= (index-1) ;i++)
        {
            traverse = traverse->next;
        }

        Node *temp = new Node;
        temp->data = value;
        temp->next = traverse->next;
        traverse->next = temp;

        return;
    }
}

void sorted_insert(Node **head, int value)
{
    Node *p = *head;
    Node *q = NULL;

    Node *temp = new Node;                      // No need to repeat it several times
    temp->data = value;

    if(p == NULL && q == NULL)                  //case 1 empty list
    {
        
        temp->next = NULL;
        *head = temp;
    }
    else if( q == NULL && value< p->data)       //case 2 , value less then first 
    {   
        
        temp->next = p;
        *head = temp;
    }
    else                                        //case 3, in between and at the end                   
    {
        while(p!= NULL && p->data<= value)
        {
            q = p;
            p = p->next;
        }

        temp->next = p;
        q->next = temp;
    }

}

void display_recur( Node *p)        // recursive display function
{
    if(p!=NULL)                     // dangerous to use while in recusion as calls do not get terminated
    {
        cout<<p->data<<" ";                 
        display_recur(p->next);             // if we exchange the 2 statements, then we can  print the linked list in reverse
    }   
}

int main()
{
    
    insert(&first,0,2);
    insert(&first,1,5);
    insert(&first,2,17);
    insert(&first,3,45);

    sorted_insert( &first,50);

    display_recur(first);

    return 0;
}