// In arrays, we use both Transposition and Move to head but here we only use Move to Head(the whole node)
// as we dont prefer much movement of data in linked list

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *first=NULL;
Node *last = first;

Node* seach( Node *p, int value )
{
    p = first;
    Node* q = NULL;

    while(p!= NULL)
    {
        if(p->data== value)             // value is found
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
            
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    return NULL;
}