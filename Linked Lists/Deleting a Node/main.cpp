//we need an extra pointer cause we have to deallocate the node also
//for indexex, we mark the nodes as 1, 2, 3,.....
// 2 cases , delete first node O(1), delete any index node
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

void delete_node( Node **head, int node_index)      // delete is a keyword so cant use that
{
    if(node_index == 1)
    {
        Node *p = *head;
        *head = p->next;
        delete p;
    }
    else
    {
        Node *p = *head;
        Node *q = NULL;

        for(int i =1 ; i< node_index && p!= NULL; i++)
        {   
            q = p;
            p=p->next;
        }

        if(p!=NULL)
        {
            q->next = p->next;
            delete p;
        }


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

    delete_node(&first,7);

  

    display_recur(first);

    return 0;
}