#include <stdio.h>          //1914116 Angshuman Das
#include <stdlib.h>
#include <string.h>

#define MAX 101

int stack[MAX];
int size=-1;

void push(int element)
{
    if(size>=(MAX-1))
    {
        printf("Size maxed out")   ;
    }
    else
    {
        stack[++size]=element;
    }
}

void pop()
{
    if(size>=0)
        size--;
}

int main()
{
    char expression[100];
    printf("Enter expression (without space) : ");
    scanf("%[^\n]",expression);

    int length=strlen(expression);

    for(int i =0; i<length;i=i+2)
    {

        int temp = expression[i];
        int int_temp=(int)temp;

        if( (int_temp>=48) && (int_temp<=57))   //checking number
            push( temp-'0');        //pushes int value of charecter

        else
        {
            switch(temp)
            {

                case '+'    :   stack[size-1]=stack[size-1]+stack[size];
                                pop();
                                break;
                case '-'    :   stack[size-1]=stack[size-1]-stack[size];
                                pop();
                                break;
                case '*'   :   stack[size-1]=stack[size-1]*stack[size];
                                pop();
                                break;
                case '/'     :  stack[size-1]=stack[size-1]/stack[size];
                                pop();
                                break;
                case '^'     :  stack[size-1]=stack[size-1]^stack[size];
                                pop();
                                break;
                default:        break;

            }
        }
    }

    printf("%d",stack[0]);

    return 0;
}
