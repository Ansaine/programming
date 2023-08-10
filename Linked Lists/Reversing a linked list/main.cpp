// We can reverse a linked list by
// 1. reversing the elements, we need to use an array to store them first then reverse copy 
// 2. reversing the node links using 3 sliding pointers
// 3. Using Recursion. We reverse the links while returning


#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *first=NULL;

void insert(Node **p, int index, int value)     
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

void display_recur( Node *p)        
{
    if(p!=NULL)                     // dangerous to use while in recusion as calls do not get terminated
    {
        cout<<p->data<<" ";                 
        display_recur(p->next);             // if we exchange the 2 statements, then we can  print the linked list in reverse
    }   
}

void reverse_list(Node** head)      // SLIDING POINTERS METHODS
{
    Node *r,*q, *p;

    r = NULL; q = NULL; p = *head;

    while ( p!= NULL)
    {
        r = q;
        q = p;
        p = p->next;

        q->next = r;
    }

    if( q!= NULL)                       //before changing the first, we see if the link has actually reversed
    {                                   // inseted of double pointer we can just return the new head that is q
        *head = q;
    }

}

// void reverse_list_recur(Node** head, Node* q, Node* p)  // RECURSIVE METHOD - adding extra **head to change the first implicitly
// {
//     if(p!= NULL)
//     {   
//         reverse_list_recur( head, p, p->next);
//         p->next = q;        
//     }
//     else
//         *head = q;
        
// }


struct Node* reverseList(struct Node *head)         //recursive
    {
        if(head == NULL || (head->next)==NULL)  
            return head;
        
        auto res = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return res;       
    }

int main()
{
    insert(&first,0,2);
    insert(&first,1,5);
    insert(&first,2,17);
    insert(&first,3,45);

    reverse_list_recur( &first,NULL,first);

    display_recur(first);

    return 0;
}