//Remember the list has to be sorted first

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *first=NULL;

void insert(Node **p, int index, int value)         // we initialise a pointer to first pointer so we can change the value of first
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

void remove_duplicates( Node* p)
{
    if( p == NULL || p->next == NULL)
        return;
    else
    {
        Node* q = p;
        p = p->next;

        while(p!= NULL)
        {
            if(p->data == q->data)
            {
                q->next = p->next;
                // free (p)         // deletes node
                p = p->next;
            }
            else
            {
                p = p->next;
                q = q->next;
            }
        }
        return;
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
    

    remove_duplicates(first);
  

    display_recur(first);

    return 0;
}