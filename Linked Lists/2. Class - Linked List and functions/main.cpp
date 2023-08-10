#include<iostream>
using namespace std;

class Node{                     // first is node declaration

public:
    int data;
    Node* next;
};

class List                      // this is a class containing first and last node addresses with the functions
{   

public:
    Node* first;
    Node* last;

    List()
    {
        first = NULL;
        last = first;
    }
    
    //functions
    void insertlist(int);
    void displaylist();

};

void List :: insertlist(int d)
{
    Node * n = new Node;
    n->data = d;
    n->next = NULL;

    if(first == NULL)
    {
        first= n;
        last = first;
    }
    else                                    // if we dont have a last pointer then we need a while loop to iterate
    {                                       // and go to the last element to add the data
        last->next = n;
        last = n;
    }
}

void List :: displaylist()
{
    Node *temp = first;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }

    cout<<"\n";

}

int main()
{
    List list1;

    list1.insertlist(1);
    list1.insertlist(3);
    list1.insertlist(4);
    list1.insertlist(7);

    list1.displaylist();
    

    return 0;

}