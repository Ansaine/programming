// Circular queue
//We need enqueue and dequeue funcion

#include<iostream>

using namespace std;

struct queue                                    //declaring queue as a user defined data type
{
    int size;
    int front;
    int rear;
    int *Q;
    
};

void create( struct queue *q,int size)          //initialising the queue
{
    q->size=size;
    q->front=q->rear=0;                         //For cicrcular queue front and rear are at 0
    q->Q=(int *)malloc(size*sizeof(queue));

}

void enqueue(struct queue *q, int x)
{
    if((q->rear+1)%q->size == q->front)                   //(rear+1)%size is equal to front means empty queue
        {
            cout<<"Queue is Full";
        }
    else                                                  //if queue is not full we increment rear and insert value 
        {
            q->rear=(q->rear+1)%q->size;
            q->Q[q->rear]= x;
        }
}

int dequeue(struct queue *q)                            // dequeue is not void function, it returns the deleted element
{   
    int x = -1;
    if((q->front+1)%q->size == q->rear)                 //if queue is not empty we delete             
        {
            cout<<"Queue is Empty";
        }
    else
    {
        q->front= (q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}

void display(struct queue *q)                            //FRONT IS Q.FRONT + 1
{
    for(int i = q->front+1; i<=q->rear; i=(i+1)%q->size )     //Abdul Bari uses somewhat while loop differently
    {
        cout<<q->Q[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{   
    queue q;

    create(&q,5);                    //using size as 5
    enqueue(&q, 10);
    enqueue(&q, 45);
    enqueue(&q, 34);

    display(&q);

    dequeue(&q);

    display(&q);




    return 0;

}