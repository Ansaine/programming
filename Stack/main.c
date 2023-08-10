#include <stdio.h>          //Angshuman_Das 1914116
#include <stdlib.h>

#define MAX 20          //choosing max size of array as 20

int array[MAX];
int size=-1;

int push(int element)
{
    if(size>=(MAX-1))
    {
        return -1;
    }
    else
    {
        array[size+1]=element;
        size++;
        return 1;
    }
}
int pop()
{
    if(size>=0)
    {
        size--;
        return 1;
    }
    else
    {
        return -1;
    }
}
void peek()
{
    if(size==-1)
    {
        printf("\nList is Empty.");
    }
    else
    {
    printf("\n%d",array[size]);
    }
    printf("\n");

}

void display()
{
    if(size==-1)
    {
        printf("\nList is Empty.");
    }
    else
    {
        for(int i=size;i>=0;i--)
        printf("\n%d",array[i]);
    }
    printf("\n");


}

int main()
{
    do{
    int choice,result;

    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Display");
    printf("\n4. Peek");
    printf("\n5. Exit");
    printf("\n\nEnter choice : ");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("\nEnter element: ");
                int data;
                scanf("%d",&data);
                result=push(data);

                    if(result==-1)
                    {
                        printf("\nCan't push. Stack is full.");
                    }

                break;

        case 2: result=pop();

                if(result==-1)
                {
                    printf("\nStack is already empty.");
                }
                break;

        case 3: display();
                break;

        case 4: peek();
                break;

        case 5: exit(1);

        default: exit(1);


    }
    }while(1);

    return 0;
}
