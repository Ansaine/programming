//In a circuit race, the faster one comes back again
// both loop and last being null cannot exist together
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *first=NULL;

int isloop(Node* head)
{
    Node *p = head;
    Node *q = head;

    while(q!= NULL)
    {
        if(p==q)                    //if loop is found
        {
            return 1;
            break;
        }

        p=p->next;
        q=q->next;
        q = q!=NULL?q->next:NULL;   //check if q is already NULL;

    }

    return 0;
    
}