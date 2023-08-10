//Here, for linked list, front and rear are globally declared 

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

struct node* front=NULL;            //global variables for one queue only
struct node* rear=NULL;


void enqueue(int x)
{   
    struct node* temp= (struct node *)malloc(sizeof(struct node *));            //1st check memory
    
    if(temp==NULL)                                                    
    {
        cout<<"Heap is FULL";
    }
    else
    {   
        temp->data = x;                                     //first make the block
        temp->next = NULL ;   

        if(front == NULL)                                   //check if its first element
        {                   
            front = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp; 
        }
    }
}

int dequeue()
{
    int x = -1;

    if(front = NULL)
    {
        cout<<"Queue is Empty";
    }
    else
    {   
        node* p= front;              //making another node to free it later
        x = front->data;
        front = front->next;
        free(p);        
    }
    return x;
}

    

int main()
{

}

