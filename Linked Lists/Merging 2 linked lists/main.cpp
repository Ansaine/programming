//Merging means adding two sorted lists into a 3rd sorted list

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *first1 = NULL;            // list 1
Node *first2 = NULL;            // list 2


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

void display_recur( Node *p)        // recursive display function
{
    if(p!=NULL)                     // dangerous to use while in recusion as calls do not get terminated
    {
        cout<<p->data<<" ";                 
        display_recur(p->next);             // if we exchange the 2 statements, then we can  print the linked list in reverse
    }   
}

Node* merge(Node* first, Node* second)
{   
    Node *third, *last;

    if(first->data< second->data)           // 1st initialising the pointers
    {
        third = first;
        last = first;

        first = first->next;
        last->next = NULL;
    }
    else
    {
        third = second;
        last = second;
        second = second->next;
        last->next = NULL;
    }

    while( first!= NULL && second != NULL)  //2nd part ,we can just iterate over the process
    {
        if(first->data< second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next =NULL;
        }
        else
        {   
            last->next = second;
            last = second;
            second = second->next;
            last->next =NULL;
        }
    }

    if(first!= NULL)                        //Lastly, we just add the if any remaining nodes are there
    {
        last->next = first;
        last = first;
    }
    else
    {
        last->next = second;
        last = second;
    }

    return third;


}

int main()
{
    insert(&first1,0,2);
    insert(&first1,1,5);
    insert(&first1,2,17);
    insert(&first1,3,45);

    insert(&first2,0,4);
    insert(&first2,1,9);
    insert(&first2,2,15);
    insert(&first2,3,55);

    Node* first3 = merge(first1,first2);
    display_recur(first3);

    return 0;
}